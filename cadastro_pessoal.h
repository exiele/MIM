#ifndef CADASTRO_PESSOAL_H
#define CADASTRO_PESSOAL_H
#include <QtSql>
#include <QDialog>
#include <QMessageBox>
#include <QCryptographicHash>

namespace Ui {
class cadastro_pessoal;
}

class cadastro_pessoal : public QDialog
{
    Q_OBJECT

public:
    explicit cadastro_pessoal(QWidget *parent = nullptr);
    ~cadastro_pessoal();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::cadastro_pessoal *ui;
};

#endif // CADASTRO_PESSOAL_H
