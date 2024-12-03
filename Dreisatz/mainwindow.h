#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool helpStarted = false;   // verhindere Mehrfachstart des Hilfefensters


private slots:
    void closeEvent (QCloseEvent *event);
    void resetDefaults(void);
    int decideSolution(void);

    void on_dspField1_valueChanged(double arg1);
    void on_dspField2_valueChanged(double arg1);
    void on_dspField3_valueChanged(double arg1);
    void on_dspField4_valueChanged(double arg1);
    void on_btnSolution_clicked();
    void on_btnCalc_clicked();

    void on_actionNeue_Berechnung_triggered();
    void on_actionBerechnen_triggered();
    void on_actionSolution_triggered();
    void on_actionProgramm_beenden_triggered();
    void on_actionDreisatz_triggered();
    void on_action_About_triggered();
    void on_action_AboutQt_triggered();


private:
    Ui::MainWindow *ui;

    double field1, field2, field3, field4, result=0.0;
    QString str_explain;

};
#endif // MAINWINDOW_H
