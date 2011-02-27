#ifndef OKNO_H__
#define OKNO_H__

#include <QWidget>

#include "ui_storczyk.h"

#define QT_NO_DEBUG_OUTPUT

class QWidget;
class QLablel;
class HoverPoints;

class Okno: public QMainWindow, Ui::Okno
{
	Q_OBJECT

public:
	Okno(QWidget * parent);

protected:
//	void paintEvent ( QPaintEvent * event );

private slots:
//	void on_actionOProgramie_triggered(bool);
//	void on_actionOQt_triggered(bool);
//	void on_actionOtworzZdjecie_triggered(bool);
//	void on_actionZmniejsz_triggered(bool);
//	void on_actionPowieksz_triggered(bool);
//	void on_actionOryginalny_triggered(bool);

//	void on_pushObrysNerwu_toggled(bool);

//	void zmianaPunktow(double nerw, double brzeg);
//	void gotowyDoEdycji(bool stan);

signals:
//	void reset();

private:
//	void _skalujObrazek(const double x);
//	void _dostosujPasekPrzewijania(QScrollBar* scrollBar, double x);
//	void _ustawSkale(double x);

private:
	double _skala;
	QLabel* _zdjecie;
	HoverPoints* _hoverPoints;
	double _nerw;
	double _brzeg;
};
#endif

