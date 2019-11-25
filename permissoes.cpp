#include "permissoes.h"
#include "ui_permissoes.h"

permissoes::permissoes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::permissoes)
{
    ui->setupUi(this);
}

permissoes::~permissoes()
{
    delete ui;
}
