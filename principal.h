#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QDialog>
#include <cadastro_pessoal.h>
#include <cadastro_paciente.h>

namespace Ui {
class principal;
}

class principal : public QDialog
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = nullptr);
    ~principal();

private slots:
    void on_botao_sair_clicked();

    void on_cadPessoal_clicked();

    void on_cadPaciente_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
