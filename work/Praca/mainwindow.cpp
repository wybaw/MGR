#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //initial setup for GUI elements
    ui->setupUi(this);
    setWindowTitle(tr("CellViewer"));
    ui->toolBar->addAction(ui->actionOpen);
    //main label ,where graphic files are shown
    label = new QLabel;
    label->setBackgroundRole(QPalette::Base);    
    ui->scrollArea->setWidget(label);



    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(openFile()));
    connect(ui->actionClose,SIGNAL(triggered()),qApp,SLOT(quit()));
    connect(ui->actionAbout_Qt,SIGNAL(triggered()),qApp,SLOT(aboutQt()));
    connect(ui->ScreenshotButton,SIGNAL(clicked()),this,SLOT(takeScreenshot()));
    connect(ui->actionPrint,SIGNAL(triggered()),this,SLOT(print()));

}
void MainWindow::takeScreenshot()   // TODO - block SLOT until file will be loaded
{
    if(screenshot)
    {
        screenshot->save("screenshot222.png","PNG");    // TODO name of screenshot should be created
    }                                                   // based on File name.
    else
    {
        qFatal("Failure in taking screenshot");
    }
}

void MainWindow::print()    // TODO - block SLOT until file will be loaded
{
    QPrinter printer(QPrinter::HighResolution);
    printer.setColorMode(QPrinter::Color);
    printer.setOrientation(QPrinter::Landscape);

    QPrintDialog dialog(&printer,this);

    if(dialog.exec() == QDialog::Accepted)
    {
        printer.newPage();
        QPainter p(&printer);
        QPixmap resized = screenshot->scaledToWidth(printer.pageRect().width());
        p.drawPixmap(0,0,resized);
        p.end();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openFile()
{
    fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"../../komorki-zdjecia");
    if (!fileName.isEmpty())
    {
        image = new QPixmap(fileName);
        if (image->isNull())
        {
            QMessageBox::information(this, tr("CellViewer"),tr("Nie mogê za³adowaæ pliku \'%1\'.").arg(fileName));
            return;
        }

        label->setPixmap(*image);
        //copy of image ,for printing and making screenshot
        screenshot = label->pixmap();
    }
}
