#include "mainwindow.h"
#include "dialogexplain.h"
#include "qmessagebox.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btnSolution->setDisabled(true);
    ui->actionSolution->setDisabled(true);
    ui->dspField1->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ---------------------- *** Hilfsroutinen *** ----------------------
/* --- Close-Event abfangen --- */
void MainWindow::closeEvent (QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, tr("Dreisatz Rechner"),
                                                                tr("Programm beenden:\nBist Du sicher?\n"),
                                                               QMessageBox::Cancel | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        ui->statusbar->showMessage(tr("Programm wird fortgesetzt"), 60 * 15);
        event->ignore();
    } else {
        event->accept();
    }
}


/* --- Defaults zurücksetzen --- */
void MainWindow::resetDefaults(void)
{
    field1 = 0.0;
    field2 = 0.0;
    field3 = 0.0;
    field4 = 0.0;
    ui->dspField1->setValue(0.0);
    ui->dspField2->setValue(0.0);
    ui->dspField3->setValue(0.0);
    ui->dspField4->setValue(0.0);
    ui->btnSolution->setEnabled(false);
    ui->actionSolution->setEnabled(false);

}

/* --- Lösungsweg bestimmen --- */
int MainWindow::decideSolution(void)
{
    int solution = 0;
    int selection = ui->cbxDreisatzType->currentIndex();
    QString valueAsString;
    QString message;

    field1 = ui->dspField1->value();
    field2 = ui->dspField2->value();
    field3 = ui->dspField3->value();
    field4 = ui->dspField4->value();

    switch(selection)
    {
        case 0: // Proportionaler Dreisatz
            /* -- Feld 3 leer -- */
            if(!(field1 == 0.0) && !(field2 == 0.0) && !(field4 == 0.0))
            {
                solution = 1;
                result = (field1 / field2) * field4;
                ui->dspField3->setValue(result);
                str_explain = "Schritt 1:<br>Dividiere "
                              + QString::number(field1)
                              + " durch " + QString::number(field2) + ". <br>"
                              + "Ergebnis: " + QString::number(field1 / field2) + "<br> <br>"
                              + "Schritt 2:<br>Multipliziere das Ergebnis mit "
                              + QString::number(field4) + ". <br>"
                              + "Ergebnis: " + QString::number((field1 / field2) * field4);
            }
            /* -- Feld 4 leer -- */
            else if(!(field1 == 0.0) && !(field2 == 0.0) && !(field3 == 0.0))
            {
                solution = 2;
                result = (field2 / field1) * field3;
                ui->dspField4->setValue(result);
                str_explain = "Schritt 1:<br>Dividiere "
                              + QString::number(field2)
                              + " durch " + QString::number(field1) + ". <br>"
                              + "Ergebnis: " + QString::number(field2 / field1) + "<br> <br>"
                              + "Schritt 2:<br>Multipliziere das Ergebnis mit "
                              + QString::number(field3) + ". <br>"
                              + "Ergebnis: " + QString::number((field2 / field1) * field3);
            }
            /* -- Feld 2 leer -- */
            else if(!(field1 == 0.0) && !(field3 == 0.0) && !(field4 == 0.0))
            {
                solution = 3;
                result = (field4 / field3) * field1;
                ui->dspField2->setValue(result);
                str_explain = "Schritt 1:<br>Dividiere "
                              + QString::number(field4)
                              + " durch " + QString::number(field3) + ". <br>"
                              + "Ergebnis: " + QString::number(field4 / field3) + "<br> <br>"
                              + "Schritt 2:<br>Multipliziere das Ergebnis mit "
                              + QString::number(field1) + ". <br>"
                              + "Ergebnis: " + QString::number((field4 / field3) * field1);
            }
            /* -- Feld 1 leer -- */
            else if(!(field2 == 0.0) && !(field3 == 0.0) && !(field4 == 0.0))
            {
                solution = 4;
                result = (field3 / field4) * field2;
                ui->dspField1->setValue(result);
                str_explain = "Schritt 1:<br>Dividiere "
                              + QString::number(field3)
                              + " durch " + QString::number(field4) + ". <br>"
                              + "Ergebnis: " + QString::number(field3 / field4) + "<br> <br>"
                              + "Schritt 2:<br>Multipliziere das Ergebnis mit "
                              + QString::number(field2) + ". <br>"
                              + "Ergebnis: " + QString::number((field3 / field4) * field2);
            }
            else
            {
                QMessageBox::critical(this, tr("Fehler"),
                                   tr("Ungültige Eingabe!\n"
                                      "Drei Felder müssen positive Werte besitzen.\n\n"
                                      "Fang nochmal an."));

                resetDefaults();
                ui->dspField1->setFocus();
                  ui->statusbar->showMessage(tr("Benutzerfehler aufgetreten - Werte zurückgesetzt"), 60 * 30);
                solution = 0;
            }
            break;
        case 1: // Antiproportionaler Dreisatz
            /* -- Feld 3 leer -- */
            if(!(field1 == 0.0) && !(field2 == 0.0) && !(field4 == 0.0))
            {
                solution = 5;
                result = (field1 * field2) / field4;
                ui->dspField3->setValue(result);
                str_explain = "Schritt 1:<br>Multipliziere "
                              + QString::number(field1)
                              + " mit " + QString::number(field2) + ". <br>"
                              + "Ergebnis: " + QString::number(field1 * field2) + "<br> <br>"
                              + "Schritt 2:<br>Dividiere das Ergebnis mit "
                              + QString::number(field4) + ". <br>"
                              + "Ergebnis: " + QString::number((field1 * field2) / field4);
            }
            /* -- Feld 4 leer -- */
            else if(!(field1 == 0.0) && !(field2 == 0.0) && !(field3 == 0.0))
            {
                solution = 6;
                result = (field2 * field1) / field3;
                ui->dspField4->setValue(result);
                str_explain = "Schritt 1:<br>Multipliziere "
                              + QString::number(field2)
                              + " mit " + QString::number(field1) + ". <br>"
                              + "Ergebnis: " + QString::number(field2 * field1) + "<br> <br>"
                              + "Schritt 2:<br>Dividiere das Ergebnis durch "
                              + QString::number(field3) + ". <br>"
                              + "Ergebnis: " + QString::number((field2 * field1) / field3);
            }
            /* -- Feld 2 leer -- */
            else if(!(field1 == 0.0) && !(field3 == 0.0) && !(field4 == 0.0))
            {
                solution = 7;
                result = (field4 * field3) / field1;
                ui->dspField2->setValue(result);
                str_explain = "Schritt 1:<br>Multipliziere "
                              + QString::number(field4)
                              + " mit " + QString::number(field3) + ". <br>"
                              + "Ergebnis: " + QString::number(field4 * field3) + "<br> <br>"
                              + "Schritt 2:<br>Dividiere das Ergebnis durch "
                              + QString::number(field1) + ". <br>"
                              + "Ergebnis: " + QString::number((field4 * field3) / field1);
            }
            /* -- Feld 1 leer -- */
            else if(!(field2 == 0.0) && !(field3 == 0.0) && !(field4 == 0.0))
            {
                solution = 8;
                result = (field3 * field4) / field2;
                ui->dspField1->setValue(result);
                str_explain = "Schritt 1:<br>Multipliziere "
                              + QString::number(field3)
                              + " mit " + QString::number(field4) + ". <br>"
                              + "Ergebnis: " + QString::number(field3 * field4) + "<br> <br>"
                              + "Schritt 2:<br>Dividiere das Ergebnis durch "
                              + QString::number(field2) + ". <br>"
                              + "Ergebnis: " + QString::number((field3 * field4) / field2);
            }
            else
            {
                QMessageBox::critical(this, tr("Fehler"),
                                      tr("Ungültige Eingabe!\n"
                                         "Drei Felder müssen positive Werte besitzen.\n\n"
                                         "Fang nochmal an."));

                resetDefaults();
                ui->dspField1->setFocus();
                ui->statusbar->showMessage(tr("Benutzerfehler aufgetreten - Werte zurückgesetzt"), 60 * 30);
                solution = 0;
            }
                break;
    }

    if(!(solution == 0))
    {
        ui->btnSolution->setEnabled(true);
        ui->actionSolution->setEnabled(true);
        message = "Der gesuchte Wert ist: <b>" + QString::number(result) + "<\b>";
        QMessageBox::information(this, tr("Ergebnis"),
                                  message);
    }

    return(solution);
}

// ---------------------- *** Gadgets *** -----------------------------
/* --- Lösungs-Button sperren, wenn ein Wert verändert wurde ---*/
void MainWindow::on_dspField1_valueChanged(double arg1)
{
    ui->btnSolution->setEnabled(false);
    ui->actionSolution->setDisabled(true);
}

void MainWindow::on_dspField2_valueChanged(double arg1)
{
    ui->btnSolution->setEnabled(false);
    ui->actionSolution->setDisabled(true);
}

void MainWindow::on_dspField3_valueChanged(double arg1)
{
    ui->btnSolution->setEnabled(false);
    ui->actionSolution->setDisabled(true);
}

void MainWindow::on_dspField4_valueChanged(double arg1)
{
    ui->btnSolution->setEnabled(false);
    ui->actionSolution->setDisabled(true);
}

/* --- Lösungsweg anzeigen --- */
void MainWindow::on_btnSolution_clicked()
{
    QMessageBox::information(this, tr("Lösung"),
                             str_explain);
}

/* --- Berechnen --- */
void MainWindow::on_btnCalc_clicked()
{
    field1 = 0.0;
    field2 = 0.0;
    field3 = 0.0;
    field4 = 0.0;
    decideSolution();
}


// ---------------------- *** Menüs *** -------------------------------
/* --- Felder zurücksetzen --- */
void MainWindow::on_actionNeue_Berechnung_triggered()
{
    resetDefaults();
}


/* --- Berechnen --- */
void MainWindow::on_actionBerechnen_triggered()
{
   on_btnCalc_clicked();
}


/* --- Lösungsweg anzeigen --- */
void MainWindow::on_actionSolution_triggered()
{
    on_btnSolution_clicked();
}


/* --- Programm beenden --- */
void MainWindow::on_actionProgramm_beenden_triggered()
{
    this->close();
}


/* --- allgemeine Erklärung zum Dreisatz (Internet) --- */
void MainWindow::on_actionDreisatz_triggered()
{
    int r = 0;
    ui->actionDreisatz->setDisabled(true);

    DialogExplain *explain = new DialogExplain(this);
    explain->show();
    qDebug() << "r =" << r;
    /*
    if(explain->accept())
    {
        qDebug() << "Dialog done!";
    }
    */

    ui->actionDreisatz->setDisabled(false);

    /*
    if(!(helpStarted))
    {
        helpStarted = true;
        ui->actionDreisatz->setDisabled(true);
        DialogExplain *explain = new DialogExplain(this);

        explain->show();

        helpStarted = false;
        ui->actionDreisatz->setEnabled(true);

    }
    */
}


/* --- Über das Programm... --- */
void MainWindow::on_action_About_triggered()
{
    QMessageBox::about(this, tr("Über Dreisatz Rechner..."),
                       tr("Ein Programm zur Lösung von Dreisatz-Aufgaben\n\n"
                          "© 09/2024 by Micha B."));
}


/* --- Über Qt... --- */
void MainWindow::on_action_AboutQt_triggered()
{
    QMessageBox::aboutQt(this, tr("Über Qt..."));
}

