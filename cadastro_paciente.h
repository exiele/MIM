#ifndef CADASTRO_PACIENTE_H
#define CADASTRO_PACIENTE_H
#include <QtSql>
#include <QDialog>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QDateTime>

namespace Ui {
class cadastro_paciente;
}

class cadastro_paciente : public QDialog
{
    Q_OBJECT

public:
    explicit cadastro_paciente(QWidget *parent = nullptr);
    ~cadastro_paciente();

private slots:
    void on_pushButton_2_clicked();

    void on_responsavelCheckBox_stateChanged(int arg1);

    void on_cpfCheckBox_stateChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::cadastro_paciente *ui;
};

#endif // CADASTRO_PACIENTE_H
