#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("CellViewer"));
    resize(QSize(800,600));

    label = new QLabel;
    label->setBackgroundRole(QPalette::Base);
    label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->scrollArea->setWidget(label);
    //label->setScaledContents(true);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(openFile()));

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
