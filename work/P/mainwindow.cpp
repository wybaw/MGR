#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("CellViewer"));
    ui->toolBar->addAction(ui->actionOpen);


    label = new QLabel;
    label->setBackgroundRole(QPalette::Base);
    ui->scrollArea->setWidget(label);


    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(openFile()));
    connect(ui->actionClose,SIGNAL(triggered()),qApp,SLOT(quit()));
    connect(ui->actionAboutQt,SIGNAL(triggered()),qApp,SLOT(aboutQt()));

//Dasdoanfr;iebfesas sadsa

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                       tr("Open File"), QDir::currentPath());
    if (!fileName.isEmpty())
    {
        QPixmap image(fileName);
        if (image.isNull())
        {
            QMessageBox::information(this, tr("CellViewer"),
                                     tr("Nie mogê za³adowaæ pliku \'%1\'.").arg(fileName));
            return;
        }

        label->setPixmap(image);
        //label->adjustSize();
    }
}
