/****************************************************************************
**
** Copyright (C) 2005-2008 Trolltech ASA. All rights reserved.
**
** This file is part of the demonstration applications of the Qt Toolkit.
**
** This file may be used under the terms of the GNU General Public
** License versions 2.0 or 3.0 as published by the Free Software
** Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file.  Alternatively you may (at
** your option) use any later version of the GNU General Public
** License if such license has been publicly approved by Trolltech ASA
** (or its successors, if any) and the KDE Free Qt Foundation. In
** addition, as a special exception, Trolltech gives you certain
** additional rights. These rights are described in the Trolltech GPL
** Exception version 1.2, which can be found at
** http://www.trolltech.com/products/qt/gplexception/ and in the file
** GPL_EXCEPTION.txt in this package.
**
** Please review the following information to ensure GNU General
** Public Licensing requirements will be met:
** http://trolltech.com/products/qt/licenses/licensing/opensource/. If
** you are unsure which license is appropriate for your use, please
** review the following information:
** http://trolltech.com/products/qt/licenses/licensing/licensingoverview
** or contact the sales department at sales@trolltech.com.
**
** In addition, as a special exception, Trolltech, as the sole
** copyright holder for Qt Designer, grants users of the Qt/Eclipse
** Integration plug-in the right for the Qt/Eclipse Integration to
** link to functionality provided by Qt Designer and its related
** libraries.
**
** This file is provided "AS IS" with NO WARRANTY OF ANY KIND,
** INCLUDING THE WARRANTIES OF DESIGN, MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE. Trolltech reserves all rights not expressly
** granted herein.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

//#ifdef QT_OPENGL_SUPPORT
//#include <QGLWidget>
//#endif

//#include "arthurwidgets.h"

#include <qDebug>

#include <cmath>

#include "hoverpoints.h"


inline
qreal dist(QPointF const& x, QPointF const& y)
{
    QPointF p = x - y;
    return hypot(p.x(), p.y());
}

HoverPoints::HoverPoints(QWidget *widget, PointShape shape)
        : QObject(widget),
        _nerw(1.0),
        _brzeg(1.0),
        _trybEdycji(E2)
{
    m_widget = widget;
    widget->installEventFilter(this);

    m_connectionType = CurveConnection;
    m_sortType = NoSort;
    m_shape = shape;
//    m_pointPen = QPen(QColor(255, 255, 255, 191), 1);
    m_connection2Pen = QPen(QColor(255, 255, 200, 127), 2);
    m_connectionPen = QPen(QColor(255, 220, 255, 127), 2);
    m_brzegPen = QPen(QColor(255, 200, 255, 127), 1);
    m_nerwPen = QPen(QColor(255, 255, 200, 127), 1);
    m_endPointPen = QPen(QColor(127, 255, 255, 200), 1);

    m_nerwBrush = QBrush(QColor(191, 191, 100, 90));
    m_brzegBrush = QBrush(QColor(200, 100, 200, 90));
    m_endPointBrush = QBrush(QColor(200, 32, 32, 90));

    m_pointSize = QSize(11, 11);
    m_currentIndex = -1;
    m_editable = true;
    m_enabled = true;

    connect(this, SIGNAL(zmianaPunktow(double, double)),
            m_widget, SLOT(update()));
}

void HoverPoints::reset()
{
    _nerw = 1.0;
	_brzeg= 1.0;
	_trybEdycji= E2;
    m_currentIndex = -1;
    m_points_brzeg.clear();
    m_points_nerw.clear();
}


void HoverPoints::setEnabled(bool enabled)
{
    if (m_enabled != enabled)
    {
        m_enabled = enabled;
        m_widget->update();
    }
}


bool HoverPoints::eventFilter(QObject *object, QEvent *event)
{
    if (object == m_widget && m_enabled)
    {
//    	qDebug() << "eventFilter: " << event->type();

    	QPolygonF * poly  = (_trybEdycji) == EBrzeg ? &m_points_brzeg : &m_points_nerw;
		QPolygonF * poly2 = (_trybEdycji) != EBrzeg ? &m_points_brzeg : &m_points_nerw;

        switch (event->type())
        {

        case QEvent::MouseButtonPress:
        {
//			qDebug() << "MouseButtonPress, brzeg: " << m_points_brzeg.size()
//					 << ", nerw: " << m_points_nerw.size();

            QMouseEvent *me = (QMouseEvent *) event;

            QPointF clickPos = me->pos();
            int index = -1;
            for (int i=0; i < poly->size(); ++i)
            {
                QPainterPath path;
                if (m_shape == CircleShape)
                    path.addEllipse(pointBoundingRect(i, poly));
                else
                    path.addRect(pointBoundingRect(i, poly));

                if (path.contains(clickPos))
                {
                    index = i;
                    break;
                }
            }

            if (me->button() == Qt::LeftButton)
            {
//            	qDebug() << "LeftButton";

                if (index == -1)
                {
                    if (!m_editable)
                        return false;
                    int pos = 0;

                    if (m_sortType == StorczykSort and poly->size() >= 1)
                    {
                        QPointF startPoint = poly->at(0);
                        QPointF endPoint = poly->at(poly->size() - 1);
                        double tmp = 1e100;
                        for (int i = 1; i < poly->size() ; ++i)
                        {
   //                     	qDebug() << "i = " << i << "/" << poly->size();
                            double x  = dist(poly->at(i-1), poly->at(i));
                            double x0 = dist(poly->at(i-1), clickPos);
                            double x1 = dist(poly->at(i), clickPos);
                            if (std::abs(x0 + x1 - x) < tmp)
                            {
                                pos = i;
                                tmp = std::abs(x0 + x1 - x);
                            }
                        }
      //                  qDebug() << "za petla";
                    }
//					qDebug() << "poly = " << poly <<
//					            ", pos = " << pos <<
//					            ", cp = " << clickPos <<
//					            ", size = " << poly->size();
                    poly->insert(pos, clickPos);
                    if (poly->size() <= 2)
                    {
//						qDebug() << "poly2 = " << poly2 <<
//					          ", pos = " << pos <<
//					          ", cp = " << clickPos <<
//					          ", size = " << poly2->size();

                        poly2->insert(pos, clickPos);
                    }
                    m_currentIndex = pos;
                    firePointChange();
                }
                else
                {
                    m_currentIndex = index;
                }
   //             qDebug() << "ok";
                return true;

            }
            else if (me->button() == Qt::RightButton)
            {

                if (index >= 1 && index < poly->size() - 1 && m_editable)
                {
					poly->remove(index);
                    firePointChange();
                    return true;
                }
            }

        }
        break;

        case QEvent::MouseButtonRelease:

//			qDebug() << "MouseButton Release";
            m_currentIndex = -1;
            break;

        case QEvent::MouseMove:
//			qDebug() << "MouseButtonMove, indeks = " << m_currentIndex;

            if (m_currentIndex >= 0)
            {
				QPointF clickPos = ((QMouseEvent *)event)->pos();

                movePoint((*poly)[m_currentIndex], clickPos);
                if (m_currentIndex == 0)
					movePoint(poly2->front(), clickPos);
                if (m_currentIndex == poly->size()-1)
					movePoint(poly2->back(), clickPos);
            }
            break;

        case QEvent::Resize:
        {
		//	qDebug() << "MouseButtonResize...";

			QResizeEvent *e = (QResizeEvent *) event;
            if (e->oldSize().width() == 0 || e->oldSize().height() == 0)
                break;
            qreal stretch_x = e->size().width() / qreal(e->oldSize().width());
            qreal stretch_y = e->size().height() / qreal(e->oldSize().height());

//            qDebug()<<"stretch_x = " << stretch_x;
  //          qDebug()<<"stretch_y = " << stretch_y;

           for (int i=0; i < poly->size(); ++i)
            {
                QPointF p = poly->at(i);
				(*poly)[i] =  QPointF(p.x() * stretch_x, p.y() * stretch_y);
            }
            for (int i=0; i < poly2->size(); ++i)
            {
                QPointF p = poly2->at(i);
                (*poly2)[i] = QPointF(p.x() * stretch_x, p.y() * stretch_y);
            }

            firePointChange();
            break;
        }

        case QEvent::Paint:
        {
		//	qDebug() << "MouseButtonPaint...";

            QWidget *that_widget = m_widget;
            m_widget = 0;
            QApplication::sendEvent(object, event);
            m_widget = that_widget;
            paintPoints();
//#ifdef QT_OPENGL_SUPPORT
//            ArthurFrame *af = qobject_cast<ArthurFrame *>(that_widget);
//            if (af && af->usesOpenGL())
//                af->glWidget()->swapBuffers();
//#endif
            return true;
        }
        default:
            break;
        }
    }
//	qDebug() << "MouseButton - done";

    return false;
}


void HoverPoints::paintPoints()
{
    if (m_points_brzeg.size() == 0)
        return;

    QPainter p;
//#ifdef QT_OPENGL_SUPPORT
//    ArthurFrame *af = qobject_cast<ArthurFrame *>(m_widget);
//    if (af && af->usesOpenGL())
//        p.begin(af->glWidget());
//    else
//        p.begin(m_widget);
//#else
    p.begin(m_widget);
//#endif

    p.setRenderHint(QPainter::Antialiasing);

    if (m_connectionPen.style() != Qt::NoPen && m_connectionType != NoConnection)
    {
        p.setPen(m_connectionPen);

        if (m_connectionType == CurveConnection)
        {
            QPainterPath path;
            path.moveTo(m_points_brzeg.at(0));
            for (int i=1; i<m_points_brzeg.size(); ++i)
            {
                QPointF p1 = m_points_brzeg.at(i-1);
                QPointF p2 = m_points_brzeg.at(i);
                qreal distance = p2.x() - p1.x();

                path.cubicTo(p1.x() + distance / 2, p1.y(),
                             p1.x() + distance / 2, p2.y(),
                             p2.x(), p2.y());
            }
            p.drawPath(path);
        }
        else
        {
            p.drawPolyline(m_points_brzeg);
            p.setPen(m_connection2Pen);
            p.drawPolyline(m_points_nerw);
        }
    }

    p.setPen(m_brzegPen);
    p.setBrush(m_brzegBrush);

    for (int i=1; i<m_points_brzeg.size()-1; ++i)
    {
        QRectF bounds = pointBoundingRect(i, &m_points_brzeg);
        if (m_shape == CircleShape)
            p.drawEllipse(bounds);
        else
            p.drawRect(bounds);
    }
    p.setPen(m_nerwPen);
    p.setBrush(m_nerwBrush);
    for (int i=1; i<m_points_nerw.size()-1; ++i)
    {
        QRectF bounds = pointBoundingRect(i, &m_points_nerw);
        if (m_shape == CircleShape)
            p.drawEllipse(bounds);
        else
            p.drawRect(bounds);
    }
	p.setBrush(m_endPointBrush);
    p.setPen(m_endPointPen);
    if (m_shape == CircleShape)
    {
        p.drawEllipse(pointBoundingRect(0, &m_points_brzeg));
        if (m_points_brzeg.size() > 1)
            p.drawEllipse(pointBoundingRect(m_points_brzeg.size()-1, &m_points_brzeg));
    }
    else
    {
        p.drawRect(pointBoundingRect(0, &m_points_brzeg));
        if (m_points_brzeg.size() > 1)
            p.drawRect(pointBoundingRect(m_points_brzeg.size()-1, &m_points_brzeg));
    }


}


/*void HoverPoints::setPoints(const QPolygonF &points)
{
    m_points.clear();
    for (int i=0; i<points.size(); ++i)
        m_points << points.at(i);

    m_locks.clear();
    if (m_points.size() > 0)
    {
        m_locks.resize(m_points.size());

        m_locks.fill(0);
    }
}
*/

void HoverPoints::movePoint(QPointF &newPoint, const QPointF &point, bool emitUpdate)
{
    newPoint = point;
    if (emitUpdate)
        firePointChange();
}


inline static bool x_less_than(const QPointF &p1, const QPointF &p2)
{
    return p1.x() < p2.x();
}


inline static bool y_less_than(const QPointF &p1, const QPointF &p2)
{
    return p1.y() < p2.y();
}

void HoverPoints::firePointChange()
{
//    printf("HoverPoints::firePointChange(), current=%d\n", m_currentIndex);
//	qDebug() << "firePointsChanged";
    _nerw = _brzeg = 0.0;
    if (m_points_nerw.size() == 0)
    {
        emit zmianaPunktow(_nerw, _brzeg);
        return;
    }

//	qDebug() << "m_points_nerw.size() = " << m_points_nerw.size();

    double mian = dist(m_points_nerw[0], m_points_nerw [m_points_nerw.size()-1]);

	if (mian < 1e-10)
    {
        emit zmianaPunktow(_nerw, _brzeg);
        return;
    }

    for (int i = 1; i < m_points_brzeg.size(); ++i)
    {
        _brzeg += dist(m_points_brzeg[i-1], m_points_brzeg[i]);
    }
    for (int i = 1; i < m_points_nerw.size(); ++i)
    {
        _nerw += dist(m_points_nerw[i-1], m_points_nerw[i]);
    }

    _nerw /= mian;
    _brzeg /= mian;

    emit zmianaPunktow(_nerw, _brzeg);
	emit gotowyDoEdycji(m_points_brzeg.size() >= 2);

}

void HoverPoints::zmiana_trybu(bool obrysNerwu)
{
	if(m_points_brzeg.size() >= 2)
	{
		_trybEdycji = obrysNerwu ? ENerw : EBrzeg;
	}
}



