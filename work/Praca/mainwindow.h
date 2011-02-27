#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QFileDialog>
#include <QMessageBox>
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

private:
    Ui::MainWindow *ui;
    QLabel * label;
    const QPixmap* screenshot;
};

#endif // MAINWINDOW_H
