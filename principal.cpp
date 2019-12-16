#include "principal.h"
#include "ui_principal.h"

principal::principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
}

principal::~principal()
{
    delete ui;
}

void principal::on_botao_sair_clicked()
{
    this->close();
}

void principal::on_cadPessoal_clicked()
{
    cadastro_pessoal cadastro;
    cadastro.exec();
}

void principal::on_cadPaciente_clicked()
{
    cadastro_paciente cadastro;
    cadastro.exec();
}
