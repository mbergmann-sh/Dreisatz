#ifndef DIALOGEXPLAIN_H
#define DIALOGEXPLAIN_H

#include <QDialog>

namespace Ui {
class DialogExplain;
}

class DialogExplain : public QDialog
{
    Q_OBJECT

public:
    explicit DialogExplain(QWidget *parent = nullptr);
    ~DialogExplain();

private slots:
    void on_btnUnterstood_clicked();

private:
    Ui::DialogExplain *ui;
};

#endif // DIALOGEXPLAIN_H
