/********************************************************************************
** Form generated from reading UI file 'dialogexplain.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEXPLAIN_H
#define UI_DIALOGEXPLAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogExplain
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnUnterstood;

    void setupUi(QDialog *DialogExplain)
    {
        if (DialogExplain->objectName().isEmpty())
            DialogExplain->setObjectName("DialogExplain");
        DialogExplain->resize(484, 430);
        DialogExplain->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(DialogExplain);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(DialogExplain);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(382, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        btnUnterstood = new QPushButton(DialogExplain);
        btnUnterstood->setObjectName("btnUnterstood");

        gridLayout->addWidget(btnUnterstood, 1, 1, 1, 1);


        retranslateUi(DialogExplain);
        QObject::connect(btnUnterstood, &QPushButton::clicked, DialogExplain, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(DialogExplain);
    } // setupUi

    void retranslateUi(QDialog *DialogExplain)
    {
        DialogExplain->setWindowTitle(QCoreApplication::translate("DialogExplain", "Dreisatz-Hilfe", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogExplain", "Was ist Dreisatz?", nullptr));
        textEdit->setHtml(QCoreApplication::translate("DialogExplain", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Dreisatz einfach erkl\303\244rt \342\200\223 Wann wird er gebraucht?</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Der Dreisatz ist ein L\303\266sungsverfahren in der Mathematik, mit dem du aus dem Verh\303\244ltnis zwischen 2 bekannten Gr\303\266\303\237en ei"
                        "ne unbekannte Gr\303\266\303\237e berechnen kannst.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Die Bezeichnung \342\200\234Dreisatz\342\200\235 ergibt sich aus den 3 Schritten des Rechenwegs.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mit dem Dreisatz lassen sich <span style=\" font-style:italic;\">Proportionalaufgaben</span> berechnen. Auch im Alltag ist die Anwendung des Dreisatz ein hilfreiches Mittel. Du kannst mit ihm unter anderem</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Preise im Supermarkt ausrechnen</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Mengenangaben beim Kochen oder Backen ermitteln</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margi"
                        "n-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Prozents\303\244tze berechnen</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; text-decoration: underline;\">Proportionaler Dreisatz</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Der klassische Dreisatz wird auch <span style=\" font-style:italic;\">proportionaler Dreisatz</span> genannt. Zwei Mengen bzw. Gr\303\266\303\237en stehen im proportionalen Verh\303\244ltnis zueinander. Die Werte steigen oder sinken also im gleichen Verh\303\244ltnis: je mehr von X, desto mehr von Y.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic;\">Beispiel:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Stell dir vor, du m\303\266chtest drei Packungen Kekse kaufen. Eine Packung Kekse kostet 0,75 \342\202\254. Dann kosten zwei Packungen Kekse dopppelt so viel (1,50 \342\202\254) und drei Kekspackungen dreimal so viel (2,25 \342\202\254). Das ist ein proportionales Verh\303\244ltnis.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">Proportionalen Dreisatz berechnen mit der Dreisatz Formel:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Zun\303\244chst wollen wir den Rechenweg anhand einer Aufgabe und einer Tabelle veranschaulichen.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Die Aufgabenstellung in einer Mathearbeit k\303\266nnte lauten:</p>\n"
"<p style=\" m"
                        "argin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\200\234Ihr steht im Supermarkt an der K\303\244setheke und wollt 3 kg Gouda kaufen. 5 Kilogramm Gouda kosten 25,50 Euro. Wieviel kosten 3 Kilogramm?\342\200\235</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Der L\303\266sungweg ist eigentlich ganz einfach:</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; text-decoration: underline;\">Schritt 1: Datenerfassung</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\222 5 kg K\303\244se kosten 25,50 \342\202\254</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-st"
                        "yle:italic; text-decoration: underline;\">Schritt 2: Preis f\303\274r 1 kg berechnen</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\222 1 kg K\303\244se kosten 25,50 : 5 = 5,10\342\202\254</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; text-decoration: underline;\">Schritt 3: Preis f\303\274r 3 kg berechnen</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\222 3 kg K\303\244se kosten 5,10 \342\200\242 3 = 15,30</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/Proportionaler-Dreisatz-Rechenweg.jpg\" /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-"
                        "indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">Proportionaler Dreisatz - Rechenweg</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hat man einmal den Rechenweg des proportionalen Dreisatzes verinnerlicht, kann man auch ohne Tabelle arbeiten und stattdessen direkt die Formel anwenden:</p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; text-decoration: underline;\">Proportionaler Dreisatz: Formel</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/Proportionaler-Dreisatz-Formel-1.jpg\" /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; text-decora"
                        "tion: underline;\">Antiproportionaler Dreisatz bzw. umgekehrter Dreisatz</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Der antiproportionale Dreisatz wird auch <span style=\" font-style:italic;\">umgekehrter Dreisatz</span> genannt. Beim antiproportionalen Dreisatz stehen zwei Gr\303\266\303\237en in einem antiproportionalen Zusammenhang. Hier gilt also: Je mehr von Gr\303\266\303\237e X, desto weniger von Gr\303\266\303\237e Y. Beispiel:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Stell dir vor, beim Supermarkt kommt eine neue Warenlieferung an. Drei Arbeitskr\303\244fte sollen die Waren in die Regale einsortieren. Sie brauchen daf\303\274r 10 Stunden. Werden allerdings drei zus\303"
                        "\244tzliche Mitarbeiter angefordert, brauchen alle sechs gemeinsam nur halb so viel Zeit, also 5 Stunden.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; text-decoration: underline;\">Antiproportionaler Dreisatz - Beispiel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/Antiproportionaler-Dreisatz.jpg\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">Antiproportionalen Dreisatz berechnen \342\200\223 Formel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px;\">Auch in diesem Fall kann man den Rechenweg sehr gut mit einer Tabelle veranschaulichen. Doch schauen wir uns zun\303\244chst eine Beispielaufgabe an:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\200\234Drei Mitarbeiter des Finanzamts brauchen 32 Stunden, um die Abrechnung eines wichtigen Kunden fertigzustellen. Wie viele Stunden werden insgesamt ben\303\266tigt, wenn acht Mitarbeiter an der Abrechnung arbeiten?\342\200\235</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Auch hier besteht "
                        "der Rechenweg wieder aus 3 Schritten:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; text-decoration: underline;\">Schritt 1: Datenerfassung</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\222 3 Mitarbeiter ben\303\266tigen 32 Arbeitsstunden</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; text-decoration: underline;\">Schritt 2: Stunden f\303\274r einen Mitarbeiter berechnen</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\222 1  Mitarb"
                        "eiter alleine ben\303\266tigt 32 Stunden \342\200\242  3 = 96 Arbeitsstunden</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; text-decoration: underline;\">Schritt 3: Stunden f\303\274r 8 Mitarbeiter berechnen</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\222 8 Mitarbeiter ben\303\266tigen 96 Stunden : 8 = 12 Arbeitsstunden</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Eigentlich ganz einfach oder? Der wichtigste Schritt ist zu erkennen, dass es sich um eine antiproportionale Zuordnung handelt, denn je mehr Mitarbeiter am selben Projekt arbeiten, desto weniger Z"
                        "eit wird insgesamt ben\303\266tigt.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/Antiproportionaler-Dreisatz.jpg\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Die Tabelle dient der Veranschaulichung. Nat\303\274rlich kannst Du die L\303\266sung auch einfach mit der Formel ermitteln:</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/Proportionaler-Dreisatz-Formel-1.jpg\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        btnUnterstood->setText(QCoreApplication::translate("DialogExplain", "Verstanden!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogExplain: public Ui_DialogExplain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEXPLAIN_H
