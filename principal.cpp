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
