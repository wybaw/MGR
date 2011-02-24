#include <QApplication>
#include <QTextCodec>
#include <QDir>           // <--- Q_INIT_RESOURCE
#include "okno.h"


int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(storczyk);

    QApplication app(argc, argv);
    QTextCodec::setCodecForCStrings(
        QTextCodec::codecForName("Windows-1250")
    );
    QTextCodec::setCodecForTr(
        QTextCodec::codecForName("Windows-1250")
    );

    Okno* okno = new Okno(0);
    okno->show();

    return app.exec();
}
