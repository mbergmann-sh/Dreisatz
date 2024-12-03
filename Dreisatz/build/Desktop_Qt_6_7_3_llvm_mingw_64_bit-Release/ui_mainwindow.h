/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNeue_Berechnung;
    QAction *actionProgramm_beenden;
    QAction *actionDreisatz;
    QAction *action_About;
    QAction *action_AboutQt;
    QAction *actionSolution;
    QAction *actionBerechnen;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *dspField1;
    QLabel *label_2;
    QDoubleSpinBox *dspField2;
    QDoubleSpinBox *dspField3;
    QLabel *label_3;
    QDoubleSpinBox *dspField4;
    QComboBox *cbxDreisatzType;
    QPushButton *btnSolution;
    QPushButton *btnCalc;
    QMenuBar *menubar;
    QMenu *menuProjekt;
    QMenu *menuHilfe;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(276, 221);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/accessories-calculator-3.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionNeue_Berechnung = new QAction(MainWindow);
        actionNeue_Berechnung->setObjectName("actionNeue_Berechnung");
        actionProgramm_beenden = new QAction(MainWindow);
        actionProgramm_beenden->setObjectName("actionProgramm_beenden");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/application-exit.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionProgramm_beenden->setIcon(icon1);
        actionDreisatz = new QAction(MainWindow);
        actionDreisatz->setObjectName("actionDreisatz");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/address-book-new-2.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDreisatz->setIcon(icon2);
        action_About = new QAction(MainWindow);
        action_About->setObjectName("action_About");
        action_AboutQt = new QAction(MainWindow);
        action_AboutQt->setObjectName("action_AboutQt");
        actionSolution = new QAction(MainWindow);
        actionSolution->setObjectName("actionSolution");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/emblem-notice.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSolution->setIcon(icon3);
        actionBerechnen = new QAction(MainWindow);
        actionBerechnen->setObjectName("actionBerechnen");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/checkbox-2.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBerechnen->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        labelTitle = new QLabel(centralwidget);
        labelTitle->setObjectName("labelTitle");
        QFont font;
        font.setFamilies({QString::fromUtf8("Rundkursiv")});
        font.setPointSize(14);
        labelTitle->setFont(font);

        gridLayout->addWidget(labelTitle, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        dspField1 = new QDoubleSpinBox(groupBox);
        dspField1->setObjectName("dspField1");
        dspField1->setDecimals(4);
        dspField1->setMaximum(99999.990000000005239);

        gridLayout_2->addWidget(dspField1, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        dspField2 = new QDoubleSpinBox(groupBox);
        dspField2->setObjectName("dspField2");
        dspField2->setDecimals(4);
        dspField2->setMaximum(99999.990000000005239);

        gridLayout_2->addWidget(dspField2, 0, 2, 1, 1);

        dspField3 = new QDoubleSpinBox(groupBox);
        dspField3->setObjectName("dspField3");
        dspField3->setDecimals(4);
        dspField3->setMaximum(99999.990000000005239);

        gridLayout_2->addWidget(dspField3, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        dspField4 = new QDoubleSpinBox(groupBox);
        dspField4->setObjectName("dspField4");
        dspField4->setDecimals(4);
        dspField4->setMaximum(99999.990000000005239);

        gridLayout_2->addWidget(dspField4, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        cbxDreisatzType = new QComboBox(groupBox);
        cbxDreisatzType->addItem(QString());
        cbxDreisatzType->addItem(QString());
        cbxDreisatzType->setObjectName("cbxDreisatzType");

        gridLayout_3->addWidget(cbxDreisatzType, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 2);

        btnSolution = new QPushButton(centralwidget);
        btnSolution->setObjectName("btnSolution");
        btnSolution->setIcon(icon3);

        gridLayout_4->addWidget(btnSolution, 2, 0, 1, 1);

        btnCalc = new QPushButton(centralwidget);
        btnCalc->setObjectName("btnCalc");
        btnCalc->setIcon(icon4);

        gridLayout_4->addWidget(btnCalc, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 276, 22));
        menuProjekt = new QMenu(menubar);
        menuProjekt->setObjectName("menuProjekt");
        menuHilfe = new QMenu(menubar);
        menuHilfe->setObjectName("menuHilfe");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuProjekt->menuAction());
        menubar->addAction(menuHilfe->menuAction());
        menuProjekt->addAction(actionNeue_Berechnung);
        menuProjekt->addSeparator();
        menuProjekt->addAction(actionBerechnen);
        menuProjekt->addAction(actionSolution);
        menuProjekt->addSeparator();
        menuProjekt->addAction(actionProgramm_beenden);
        menuHilfe->addAction(actionDreisatz);
        menuHilfe->addSeparator();
        menuHilfe->addAction(action_About);
        menuHilfe->addAction(action_AboutQt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dreisatz-Rechner", nullptr));
        actionNeue_Berechnung->setText(QCoreApplication::translate("MainWindow", "Neue Berechnung", nullptr));
#if QT_CONFIG(statustip)
        actionNeue_Berechnung->setStatusTip(QCoreApplication::translate("MainWindow", "Alle Werte zur\303\274cksetzen", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionNeue_Berechnung->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionProgramm_beenden->setText(QCoreApplication::translate("MainWindow", "Programm beenden", nullptr));
#if QT_CONFIG(statustip)
        actionProgramm_beenden->setStatusTip(QCoreApplication::translate("MainWindow", "Programm beenden?", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionProgramm_beenden->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDreisatz->setText(QCoreApplication::translate("MainWindow", "Dreisatz...", nullptr));
#if QT_CONFIG(statustip)
        actionDreisatz->setStatusTip(QCoreApplication::translate("MainWindow", "Grundlagen zum Dreisatz", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionDreisatz->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About->setText(QCoreApplication::translate("MainWindow", "\303\234ber das Program...", nullptr));
#if QT_CONFIG(statustip)
        action_About->setStatusTip(QCoreApplication::translate("MainWindow", "\303\274ber Dreisatz Rechner...", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_About->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_AboutQt->setText(QCoreApplication::translate("MainWindow", "\303\234ber Qt...", nullptr));
#if QT_CONFIG(statustip)
        action_AboutQt->setStatusTip(QCoreApplication::translate("MainWindow", "\303\274ber Qt...", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_AboutQt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSolution->setText(QCoreApplication::translate("MainWindow", "L\303\266sungsweg...", nullptr));
#if QT_CONFIG(statustip)
        actionSolution->setStatusTip(QCoreApplication::translate("MainWindow", "L\303\266sungsweg erkl\303\244ren", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSolution->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBerechnen->setText(QCoreApplication::translate("MainWindow", "Berechnen", nullptr));
#if QT_CONFIG(statustip)
        actionBerechnen->setStatusTip(QCoreApplication::translate("MainWindow", "Fehlenden Bezug berechnen", nullptr));
#endif // QT_CONFIG(statustip)
        labelTitle->setText(QCoreApplication::translate("MainWindow", "Dreisatz berechnen", nullptr));
        groupBox->setTitle(QString());
#if QT_CONFIG(statustip)
        dspField1->setStatusTip(QCoreApplication::translate("MainWindow", "Positiven Wert eingeben oder 0 f\303\274r Wertsuche", nullptr));
#endif // QT_CONFIG(statustip)
        label_2->setText(QCoreApplication::translate("MainWindow", "entspricht", nullptr));
#if QT_CONFIG(statustip)
        dspField2->setStatusTip(QCoreApplication::translate("MainWindow", "Positiven Wert eingeben oder 0 f\303\274r Wertsuche", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        dspField3->setStatusTip(QCoreApplication::translate("MainWindow", "Positiven Wert eingeben oder 0 f\303\274r Wertsuche", nullptr));
#endif // QT_CONFIG(statustip)
        label_3->setText(QCoreApplication::translate("MainWindow", "entspricht", nullptr));
#if QT_CONFIG(statustip)
        dspField4->setStatusTip(QCoreApplication::translate("MainWindow", "Positiven Wert eingeben oder 0 f\303\274r Wertsuche", nullptr));
#endif // QT_CONFIG(statustip)
        cbxDreisatzType->setItemText(0, QCoreApplication::translate("MainWindow", "Proportionaler Dreisatz", nullptr));
        cbxDreisatzType->setItemText(1, QCoreApplication::translate("MainWindow", "Antiproportionaler Dreisatz", nullptr));

#if QT_CONFIG(tooltip)
        cbxDreisatzType->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">Proportionaler Dreisatz:</span><br/>Beide Werte wachsen</p><p><span style=\" font-weight:700; font-style:italic;\">Antiproportionaler Dreisatz</span>: <br/>Wenn eine Gr\303\266\303\237e w\303\244chst, verringert sich die Andere</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbxDreisatzType->setStatusTip(QCoreApplication::translate("MainWindow", "Proportional oder antiproportional?", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        btnSolution->setStatusTip(QCoreApplication::translate("MainWindow", "L\303\266sungsweg erkl\303\244ren", nullptr));
#endif // QT_CONFIG(statustip)
        btnSolution->setText(QCoreApplication::translate("MainWindow", "L\303\266sungsweg...", nullptr));
#if QT_CONFIG(statustip)
        btnCalc->setStatusTip(QCoreApplication::translate("MainWindow", "Fehlende Gr\303\266\303\237e berechnen", nullptr));
#endif // QT_CONFIG(statustip)
        btnCalc->setText(QCoreApplication::translate("MainWindow", "Berech&nen", nullptr));
        menuProjekt->setTitle(QCoreApplication::translate("MainWindow", "Projekt", nullptr));
        menuHilfe->setTitle(QCoreApplication::translate("MainWindow", "Hilfe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
