/********************************************************************************
** Form generated from reading ui file 'storczyk.ui'
**
** Created: Tue 3. Feb 18:55:22 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_STORCZYK_H
#define UI_STORCZYK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Okno
{
public:
    QAction *actOtworzProjekt;
    QAction *actZapiszProjekt;
    QAction *actionOtworzZdjecie;
    QAction *actZapiszZdjecie;
    QAction *actionOProgramie;
    QAction *actionOQt;
    QAction *actionDrukuj;
    QAction *actionPDF;
    QAction *actionSVG;
    QAction *actionPNG;
    QAction *actionKoniec;
    QAction *actNowyProjekt;
    QAction *actionRozmiar;
    QAction *actionPowieksz;
    QAction *actionZmniejsz;
    QAction *actionOryginalny;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QPushButton *pushObrysNerwu;
    QPushButton *pushObrysLiscia;
    QGroupBox *groupBox_2;
    QLabel *labelDNerwu;
    QLabel *labelDKrawedzi;
    QLabel *labelKretosc;
    QLineEdit *lineEditDNerwu;
    QLineEdit *lineEditDKrawedzi;
    QLineEdit *lineEditKretosc;
    QMenuBar *menubar;
    QMenu *menu_Plik;
    QMenu *menu_Zdj_cie;
    QMenu *menuEksport;
    QMenu *menu_Pomoc;
    QMenu *menu_Widok;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Okno)
    {
    if (Okno->objectName().isEmpty())
        Okno->setObjectName(QString::fromUtf8("Okno"));
    Okno->resize(745, 636);
    actOtworzProjekt = new QAction(Okno);
    actOtworzProjekt->setObjectName(QString::fromUtf8("actOtworzProjekt"));
    actOtworzProjekt->setEnabled(false);
    actZapiszProjekt = new QAction(Okno);
    actZapiszProjekt->setObjectName(QString::fromUtf8("actZapiszProjekt"));
    actZapiszProjekt->setEnabled(false);
    actionOtworzZdjecie = new QAction(Okno);
    actionOtworzZdjecie->setObjectName(QString::fromUtf8("actionOtworzZdjecie"));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/open.png")), QIcon::Normal, QIcon::Off);
    actionOtworzZdjecie->setIcon(icon);
    actZapiszZdjecie = new QAction(Okno);
    actZapiszZdjecie->setObjectName(QString::fromUtf8("actZapiszZdjecie"));
    actZapiszZdjecie->setEnabled(false);
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8(":/icons/save.png")), QIcon::Normal, QIcon::Off);
    actZapiszZdjecie->setIcon(icon1);
    actionOProgramie = new QAction(Okno);
    actionOProgramie->setObjectName(QString::fromUtf8("actionOProgramie"));
    actionOQt = new QAction(Okno);
    actionOQt->setObjectName(QString::fromUtf8("actionOQt"));
    actionDrukuj = new QAction(Okno);
    actionDrukuj->setObjectName(QString::fromUtf8("actionDrukuj"));
    actionDrukuj->setEnabled(false);
    QIcon icon2;
    icon2.addPixmap(QPixmap(QString::fromUtf8(":/icons/print.png")), QIcon::Normal, QIcon::Off);
    actionDrukuj->setIcon(icon2);
    actionPDF = new QAction(Okno);
    actionPDF->setObjectName(QString::fromUtf8("actionPDF"));
    actionPDF->setEnabled(false);
    QIcon icon3;
    icon3.addPixmap(QPixmap(QString::fromUtf8(":/icons/print_pdf.png")), QIcon::Normal, QIcon::Off);
    actionPDF->setIcon(icon3);
    actionSVG = new QAction(Okno);
    actionSVG->setObjectName(QString::fromUtf8("actionSVG"));
    actionSVG->setEnabled(false);
    QIcon icon4;
    icon4.addPixmap(QPixmap(QString::fromUtf8(":/icons/print_svg.png")), QIcon::Normal, QIcon::Off);
    actionSVG->setIcon(icon4);
    actionPNG = new QAction(Okno);
    actionPNG->setObjectName(QString::fromUtf8("actionPNG"));
    actionPNG->setEnabled(false);
    actionKoniec = new QAction(Okno);
    actionKoniec->setObjectName(QString::fromUtf8("actionKoniec"));
    actNowyProjekt = new QAction(Okno);
    actNowyProjekt->setObjectName(QString::fromUtf8("actNowyProjekt"));
    actNowyProjekt->setEnabled(false);
    QIcon icon5;
    icon5.addPixmap(QPixmap(QString::fromUtf8(":/icons/new.png")), QIcon::Normal, QIcon::Off);
    actNowyProjekt->setIcon(icon5);
    actionRozmiar = new QAction(Okno);
    actionRozmiar->setObjectName(QString::fromUtf8("actionRozmiar"));
    actionPowieksz = new QAction(Okno);
    actionPowieksz->setObjectName(QString::fromUtf8("actionPowieksz"));
    actionZmniejsz = new QAction(Okno);
    actionZmniejsz->setObjectName(QString::fromUtf8("actionZmniejsz"));
    actionOryginalny = new QAction(Okno);
    actionOryginalny->setObjectName(QString::fromUtf8("actionOryginalny"));
    centralwidget = new QWidget(Okno);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 55, 745, 562));
    horizontalLayout = new QHBoxLayout(centralwidget);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    scrollArea = new QScrollArea(centralwidget);
    scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
    scrollArea->setWidgetResizable(false);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 551, 429));
    scrollArea->setWidget(scrollAreaWidgetContents);

    horizontalLayout->addWidget(scrollArea);

    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    groupBox = new QGroupBox(centralwidget);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(2);
    sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy);
    groupBox->setMinimumSize(QSize(180, 20));
    groupBox->setMaximumSize(QSize(180, 16777215));
    verticalLayoutWidget = new QWidget(groupBox);
    verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
    verticalLayoutWidget->setGeometry(QRect(10, 20, 161, 321));
    verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);
    verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_2->addItem(verticalSpacer);

    groupBox_3 = new QGroupBox(verticalLayoutWidget);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setEnabled(false);
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
    groupBox_3->setSizePolicy(sizePolicy1);
    groupBox_3->setMinimumSize(QSize(105, 80));
    pushObrysNerwu = new QPushButton(groupBox_3);
    pushObrysNerwu->setObjectName(QString::fromUtf8("pushObrysNerwu"));
    pushObrysNerwu->setGeometry(QRect(8, 20, 71, 51));
    QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(pushObrysNerwu->sizePolicy().hasHeightForWidth());
    pushObrysNerwu->setSizePolicy(sizePolicy2);
    pushObrysNerwu->setMinimumSize(QSize(0, 41));
    QFont font;
    font.setPointSize(9);
    font.setBold(true);
    font.setWeight(75);
    pushObrysNerwu->setFont(font);
    pushObrysNerwu->setStyleSheet(QString::fromUtf8("color:rgb(0, 170, 127)"));
    QIcon icon6;
    icon6.addPixmap(QPixmap(QString::fromUtf8(":/icons/NO16.png")), QIcon::Normal, QIcon::Off);
    icon6.addPixmap(QPixmap(QString::fromUtf8(":/icons/OK16.png")), QIcon::Normal, QIcon::On);
    pushObrysNerwu->setIcon(icon6);
    pushObrysNerwu->setCheckable(true);
    pushObrysNerwu->setChecked(true);
    pushObrysNerwu->setAutoExclusive(true);
    pushObrysNerwu->setFlat(false);
    pushObrysLiscia = new QPushButton(groupBox_3);
    pushObrysLiscia->setObjectName(QString::fromUtf8("pushObrysLiscia"));
    pushObrysLiscia->setGeometry(QRect(84, 20, 71, 51));
    sizePolicy2.setHeightForWidth(pushObrysLiscia->sizePolicy().hasHeightForWidth());
    pushObrysLiscia->setSizePolicy(sizePolicy2);
    pushObrysLiscia->setMinimumSize(QSize(0, 41));
    pushObrysLiscia->setFont(font);
    pushObrysLiscia->setStyleSheet(QString::fromUtf8("color:rgb(0, 170, 127)"));
    pushObrysLiscia->setIcon(icon6);
    pushObrysLiscia->setCheckable(true);
    pushObrysLiscia->setChecked(false);
    pushObrysLiscia->setAutoExclusive(true);
    pushObrysLiscia->setFlat(false);

    verticalLayout_2->addWidget(groupBox_3);


    verticalLayout->addWidget(groupBox);

    groupBox_2 = new QGroupBox(centralwidget);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(1);
    sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
    groupBox_2->setSizePolicy(sizePolicy3);
    groupBox_2->setMinimumSize(QSize(180, 180));
    labelDNerwu = new QLabel(groupBox_2);
    labelDNerwu->setObjectName(QString::fromUtf8("labelDNerwu"));
    labelDNerwu->setGeometry(QRect(10, 20, 151, 16));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Verdana"));
    font1.setPointSize(10);
    labelDNerwu->setFont(font1);
    labelDKrawedzi = new QLabel(groupBox_2);
    labelDKrawedzi->setObjectName(QString::fromUtf8("labelDKrawedzi"));
    labelDKrawedzi->setGeometry(QRect(10, 70, 151, 16));
    labelDKrawedzi->setFont(font1);
    labelKretosc = new QLabel(groupBox_2);
    labelKretosc->setObjectName(QString::fromUtf8("labelKretosc"));
    labelKretosc->setGeometry(QRect(10, 120, 151, 16));
    labelKretosc->setFont(font1);
    lineEditDNerwu = new QLineEdit(groupBox_2);
    lineEditDNerwu->setObjectName(QString::fromUtf8("lineEditDNerwu"));
    lineEditDNerwu->setGeometry(QRect(10, 40, 151, 20));
    lineEditDNerwu->setMinimumSize(QSize(100, 0));
    lineEditDNerwu->setFont(font1);
    lineEditDNerwu->setReadOnly(true);
    lineEditDKrawedzi = new QLineEdit(groupBox_2);
    lineEditDKrawedzi->setObjectName(QString::fromUtf8("lineEditDKrawedzi"));
    lineEditDKrawedzi->setGeometry(QRect(10, 90, 151, 20));
    lineEditDKrawedzi->setMinimumSize(QSize(100, 0));
    lineEditDKrawedzi->setFont(font1);
    lineEditDKrawedzi->setReadOnly(true);
    lineEditKretosc = new QLineEdit(groupBox_2);
    lineEditKretosc->setObjectName(QString::fromUtf8("lineEditKretosc"));
    lineEditKretosc->setGeometry(QRect(10, 140, 151, 20));
    lineEditKretosc->setMinimumSize(QSize(100, 0));
    lineEditKretosc->setFont(font1);
    lineEditKretosc->setReadOnly(true);

    verticalLayout->addWidget(groupBox_2);


    horizontalLayout->addLayout(verticalLayout);

    Okno->setCentralWidget(centralwidget);
    menubar = new QMenuBar(Okno);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 745, 21));
    menu_Plik = new QMenu(menubar);
    menu_Plik->setObjectName(QString::fromUtf8("menu_Plik"));
    menu_Zdj_cie = new QMenu(menubar);
    menu_Zdj_cie->setObjectName(QString::fromUtf8("menu_Zdj_cie"));
    menuEksport = new QMenu(menu_Zdj_cie);
    menuEksport->setObjectName(QString::fromUtf8("menuEksport"));
    menuEksport->setEnabled(true);
    menu_Pomoc = new QMenu(menubar);
    menu_Pomoc->setObjectName(QString::fromUtf8("menu_Pomoc"));
    menu_Widok = new QMenu(menubar);
    menu_Widok->setObjectName(QString::fromUtf8("menu_Widok"));
    Okno->setMenuBar(menubar);
    statusbar = new QStatusBar(Okno);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 617, 745, 19));
    Okno->setStatusBar(statusbar);
    toolBar = new QToolBar(Okno);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setGeometry(QRect(0, 21, 745, 34));
    Okno->addToolBar(Qt::TopToolBarArea, toolBar);

    menubar->addAction(menu_Plik->menuAction());
    menubar->addAction(menu_Zdj_cie->menuAction());
    menubar->addAction(menu_Widok->menuAction());
    menubar->addAction(menu_Pomoc->menuAction());
    menu_Plik->addAction(actNowyProjekt);
    menu_Plik->addAction(actOtworzProjekt);
    menu_Plik->addAction(actZapiszProjekt);
    menu_Plik->addSeparator();
    menu_Plik->addAction(actionKoniec);
    menu_Zdj_cie->addAction(actionOtworzZdjecie);
    menu_Zdj_cie->addAction(actZapiszZdjecie);
    menu_Zdj_cie->addSeparator();
    menu_Zdj_cie->addAction(actionDrukuj);
    menu_Zdj_cie->addAction(menuEksport->menuAction());
    menu_Zdj_cie->addSeparator();
    menuEksport->addAction(actionPNG);
    menuEksport->addAction(actionPDF);
    menuEksport->addAction(actionSVG);
    menu_Pomoc->addAction(actionOProgramie);
    menu_Pomoc->addAction(actionOQt);
    menu_Widok->addAction(actionPowieksz);
    menu_Widok->addAction(actionZmniejsz);
    menu_Widok->addAction(actionOryginalny);
    toolBar->addAction(actionOtworzZdjecie);
    toolBar->addAction(actZapiszZdjecie);
    toolBar->addSeparator();
    toolBar->addAction(actionDrukuj);
    toolBar->addAction(actionPDF);
    toolBar->addAction(actionSVG);

    retranslateUi(Okno);

    QMetaObject::connectSlotsByName(Okno);
    } // setupUi

    void retranslateUi(QMainWindow *Okno)
    {
    Okno->setWindowTitle(QApplication::translate("Okno", "MainWindow", 0, QApplication::UnicodeUTF8));
    actOtworzProjekt->setText(QApplication::translate("Okno", "&Otw\303\263rz", 0, QApplication::UnicodeUTF8));
    actOtworzProjekt->setShortcut(QApplication::translate("Okno", "Ctrl+Shift+O", 0, QApplication::UnicodeUTF8));
    actZapiszProjekt->setText(QApplication::translate("Okno", "&Zapisz", 0, QApplication::UnicodeUTF8));
    actionOtworzZdjecie->setText(QApplication::translate("Okno", "&Otw\303\263rz", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionOtworzZdjecie->setToolTip(QApplication::translate("Okno", "Otw\303\263rz zdj\304\231cie", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionOtworzZdjecie->setShortcut(QApplication::translate("Okno", "Ctrl+O", 0, QApplication::UnicodeUTF8));
    actZapiszZdjecie->setText(QApplication::translate("Okno", "&Zapisz", 0, QApplication::UnicodeUTF8));
    actZapiszZdjecie->setShortcut(QApplication::translate("Okno", "Ctrl+S", 0, QApplication::UnicodeUTF8));
    actionOProgramie->setText(QApplication::translate("Okno", "&O programie", 0, QApplication::UnicodeUTF8));
    actionOProgramie->setShortcut(QApplication::translate("Okno", "F1", 0, QApplication::UnicodeUTF8));
    actionOQt->setText(QApplication::translate("Okno", "O &Qt", 0, QApplication::UnicodeUTF8));
    actionOQt->setShortcut(QApplication::translate("Okno", "Ctrl+F1", 0, QApplication::UnicodeUTF8));
    actionDrukuj->setText(QApplication::translate("Okno", "&Drukuj", 0, QApplication::UnicodeUTF8));
    actionDrukuj->setShortcut(QApplication::translate("Okno", "Ctrl+P", 0, QApplication::UnicodeUTF8));
    actionPDF->setText(QApplication::translate("Okno", "&PDF", 0, QApplication::UnicodeUTF8));
    actionSVG->setText(QApplication::translate("Okno", "&SVG", 0, QApplication::UnicodeUTF8));
    actionPNG->setText(QApplication::translate("Okno", "PN&G", 0, QApplication::UnicodeUTF8));
    actionKoniec->setText(QApplication::translate("Okno", "&Koniec", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionKoniec->setToolTip(QApplication::translate("Okno", "Ko\305\204czy program", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP


#ifndef QT_NO_STATUSTIP
    actionKoniec->setStatusTip(QApplication::translate("Okno", "Koniec programu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    actionKoniec->setShortcut(QApplication::translate("Okno", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
    actNowyProjekt->setText(QApplication::translate("Okno", "&Nowy", 0, QApplication::UnicodeUTF8));
    actNowyProjekt->setShortcut(QApplication::translate("Okno", "Ctrl+Shift+N", 0, QApplication::UnicodeUTF8));
    actionRozmiar->setText(QApplication::translate("Okno", "Rozmiar", 0, QApplication::UnicodeUTF8));
    actionPowieksz->setText(QApplication::translate("Okno", "&Powi\304\231ksz", 0, QApplication::UnicodeUTF8));
    actionPowieksz->setShortcut(QApplication::translate("Okno", "+", 0, QApplication::UnicodeUTF8));
    actionZmniejsz->setText(QApplication::translate("Okno", "&Zmniejsz", 0, QApplication::UnicodeUTF8));
    actionZmniejsz->setShortcut(QApplication::translate("Okno", "-", 0, QApplication::UnicodeUTF8));
    actionOryginalny->setText(QApplication::translate("Okno", "&Oryginalny", 0, QApplication::UnicodeUTF8));
    actionOryginalny->setShortcut(QApplication::translate("Okno", "=", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Okno", "Sterowanie", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("Okno", "Tryb edycji", 0, QApplication::UnicodeUTF8));
    pushObrysNerwu->setText(QApplication::translate("Okno", "Obrys\n"
"nerwu", 0, QApplication::UnicodeUTF8));
    pushObrysLiscia->setText(QApplication::translate("Okno", "Obrys\n"
"li\305\233cia", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("Okno", "Wyniki", 0, QApplication::UnicodeUTF8));
    labelDNerwu->setText(QApplication::translate("Okno", "D\305\202ugo\305\233\304\207 nerwu", 0, QApplication::UnicodeUTF8));
    labelDKrawedzi->setText(QApplication::translate("Okno", "D\305\202ugo\305\233\304\207 kraw\304\231dzi", 0, QApplication::UnicodeUTF8));
    labelKretosc->setText(QApplication::translate("Okno", "Kr\304\231to\305\233\304\207", 0, QApplication::UnicodeUTF8));
    menu_Plik->setTitle(QApplication::translate("Okno", "&Projekt", 0, QApplication::UnicodeUTF8));
    menu_Zdj_cie->setTitle(QApplication::translate("Okno", "&Zdj\304\231cie", 0, QApplication::UnicodeUTF8));
    menuEksport->setTitle(QApplication::translate("Okno", "&Eksport", 0, QApplication::UnicodeUTF8));
    menu_Pomoc->setTitle(QApplication::translate("Okno", "Pomo&c", 0, QApplication::UnicodeUTF8));
    menu_Widok->setTitle(QApplication::translate("Okno", "&Widok", 0, QApplication::UnicodeUTF8));
    toolBar->setWindowTitle(QApplication::translate("Okno", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Okno: public Ui_Okno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORCZYK_H
