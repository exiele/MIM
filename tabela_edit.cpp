#include "tabela_edit.h"
#include "ui_tabela_edit.h"

QString nome_tabela;
tabela_edit::tabela_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabela_edit)
{
    ui->setupUi(this);
}

tabela_edit::~tabela_edit()
{
    delete ui;
}

void tabela_edit::set_Nome_Tabela(QString nome){
    nome_tabela = nome;
}
