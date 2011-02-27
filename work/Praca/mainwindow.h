#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QFileDialog>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QPlastiqueStyle>
#include <QDesktopWidget>



namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void openFile();
    void takeScreenshot();
    void print();
private:
    Ui::MainWindow *ui;
    QLabel * label;
    const QPixmap* screenshot;
    QPixmap* image;
    QString fileName;
};

#endif // MAINWINDOW_H
