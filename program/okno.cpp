#include "okno.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QImage>
#include <QScrollBar>
#include <QLabel>
#include <QCursor>



#include "hoverpoints/hoverpoints.h"


Okno::Okno(QWidget * parent)
        : QMainWindow(parent),
          _skala(1.0),
          _zdjecie(0),
          _hoverPoints(0),
          _nerw(0.0),
          _brzeg(0.0)
{
    setupUi(this);
    _zdjecie = new QLabel();
    _zdjecie->resize(0,0);
    _zdjecie->setBackgroundRole(QPalette::Base);
    _zdjecie->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    _zdjecie->setScaledContents(true);
    scrollArea->setWidget(_zdjecie);

/*
    QPolygonF points;
//    points << QPointF(_zdjecie->sizeHint().width()/2, _zdjecie->sizeHint().height()/2);

    _hoverPoints = new HoverPoints(_zdjecie, HoverPoints::CircleShape);
	_hoverPoints->setConnectionType(HoverPoints::LineConnection);
//    _hoverPoints->setPoints(points);
    _hoverPoints->setSortType(HoverPoints::StorczykSort);

	pushObrysNerwu  -> setVisible(false);
	pushObrysLiscia -> setVisible(false);

	connect(_hoverPoints, SIGNAL(zmianaPunktow(double, double)),
	        this,         SLOT(zmianaPunktow(double, double)));

	connect (pushObrysNerwu, SIGNAL(toggled(bool)),
	         _hoverPoints, SLOT(zmiana_trybu(bool)));

	connect(_hoverPoints, SIGNAL(gotowyDoEdycji(bool)),
            this, SLOT(gotowyDoEdycji(bool)));

	connect (this, SIGNAL(reset()), _hoverPoints, SLOT(reset()));

        connect (actionKoniec, SIGNAL(triggered()), qApp, SLOT(quit()));*/
}
/*
void Okno::on_actionZmniejsz_triggered(bool)
{
	_skalujObrazek(0.8);
//	QMessageBox::aboutQt(this, tr("Informacja o Qt -"));
}

void Okno::on_actionPowieksz_triggered(bool)
{
	_skalujObrazek(1.25);
//	QMessageBox::aboutQt(this, tr("Informacja o Qt +"));
}

void Okno::on_actionOryginalny_triggered(bool)
{
	_zdjecie->adjustSize();
	_ustawSkale (1.0);
//    QMessageBox::aboutQt(this, tr("Informacja o Qt ="));
}


void Okno::on_actionOtworzZdjecie_triggered(bool)
{
    QString fileName = QFileDialog::getOpenFileName(this,
                       tr("Open File"), QDir::currentPath());
    if (!fileName.isEmpty())
    {
        QImage image(fileName);
        if (image.isNull())
        {
            QMessageBox::information(this, tr("Storczyk"),
                                     tr("Nie mogê za³adowaæ pliku \'%1\'.").arg(fileName));
            return;
        }
        _zdjecie->setPixmap(QPixmap::fromImage(image));
        _ustawSkale(1.0);

//        printAct->setEnabled(true);
//        fitToWindowAct->setEnabled(true);
//        updateActions();

//        if (!fitToWindowAct->isChecked())
            _zdjecie->adjustSize();
//		_zdjecie->resize(_zdjecie->pixmap()->size());
        emit reset();
	}
}


void Okno::_skalujObrazek(const double x)
{
    Q_ASSERT(_zdjecie->pixmap());
    _ustawSkale(_skala*x);

//     setCursor(Qt::WaitCursor);
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));

    _zdjecie->resize(_skala * _zdjecie->pixmap()->size());
 //   setCursor(Qt::ArrowCursor);

    _dostosujPasekPrzewijania(scrollArea->horizontalScrollBar(), x);
    _dostosujPasekPrzewijania(scrollArea->verticalScrollBar(), x);

    actionPowieksz->setEnabled(_skala < 4.0);
    actionZmniejsz->setEnabled(_skala > 0.25);
	QApplication::restoreOverrideCursor ();

}

void Okno::_dostosujPasekPrzewijania(QScrollBar* scrollBar, double x)
{
    scrollBar->setValue(int(x * scrollBar->value()
                            + ((x - 1) * scrollBar->pageStep()/2)));
}


void Okno::on_actionOProgramie_triggered(bool status)
{
    QString tekst = QString(
                        "<html>"
                        "<table>"
                        "<tr>"
                        "<td>"
                        "<img src=\":/img/autor.png\" />"
                        "</td><td>&nbsp;</td><td>")
                    +
                    tr("Program <b><span style=\"color:brown;\">Storczyki</span></b>, wersja 0.1 <br />"
                       "(c) 2009 Zbigniew Koza<br />"
                       "Program s³u¿y do badania pofa³dowania liœci roœlin, np. storczyków<br />"
                      )
                    +
                    QString("</td></tr></table></html>");

    QMessageBox msg (QMessageBox::NoIcon,
                     tr("Edytor"),
                     tekst,
                     QMessageBox::Ok,
                     this);
    msg.exec();

}

void Okno::on_actionOQt_triggered(bool)
{
    QMessageBox::aboutQt(this, tr("Informacja o Qt"));
}

void Okno::zmianaPunktow(double nerw, double brzeg)
{
	const double eps = 1e-10;

	_nerw = nerw;
	_brzeg = brzeg;

	QString s_nerw;
	QString s_brzeg;
	QString s_kretosc;

	if (_nerw > eps && _brzeg > eps)
	{
		s_nerw.setNum(_nerw);
		s_brzeg.setNum(_brzeg);
		s_kretosc.setNum(_brzeg/_nerw);
	}
	lineEditDNerwu    -> setText(s_nerw);
	lineEditDKrawedzi -> setText(s_brzeg);
	lineEditKretosc   -> setText(s_kretosc);
}


//void Okno::on_pushObrysNerwu_toggled(bool stan)
//{
//	if (stan)
	//   _tryb
//}


void Okno::gotowyDoEdycji(bool ok)
{
//	QMessageBox::information(this, tr("Storczyk"),
//                                     tr("gotowyDoEdycji: %1.").arg(ok));

	groupBox_3->setEnabled(ok);
	if (ok and !(pushObrysNerwu->isVisible() and pushObrysLiscia->isVisible()))
	{
		pushObrysNerwu  -> setVisible(ok);
		pushObrysLiscia -> setVisible(ok);
	}

}

void Okno::_ustawSkale(double x)
{
	if (_skala != x)
	{
	   _skala = x;
	}
}


void Okno::paintEvent ( QPaintEvent * event )
{
	 setCursor(Qt::ArrowCursor);
}
*/
