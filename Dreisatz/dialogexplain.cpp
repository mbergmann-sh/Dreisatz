#include "dialogexplain.h"
#include "ui_dialogexplain.h"

DialogExplain::DialogExplain(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogExplain)
{
    ui->setupUi(this);
}

DialogExplain::~DialogExplain()
{
    delete ui;
}

/* --- Erklärungsfenster schließen --- */
void DialogExplain::on_btnUnterstood_clicked()
{
    this->close();
}

