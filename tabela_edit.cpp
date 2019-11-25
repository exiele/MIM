#include "tabela_edit.h"
#include "ui_tabela_edit.h"

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
