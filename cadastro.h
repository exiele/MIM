#ifndef CADASTRO_H
#define CADASTRO_H
#include <QtSql>
#include <QDialog>
#include <QMessageBox>
#include <QCryptographicHash>

namespace Ui {
class cadastro;
}

class cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit cadastro(QWidget *parent = nullptr);
    ~cadastro();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::cadastro *ui;
};

#endif // CADASTRO_H
