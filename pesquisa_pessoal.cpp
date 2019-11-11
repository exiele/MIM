#include "pesquisa_pessoal.h"
#include "ui_pesquisa_pessoal.h"

pesquisa_pessoal::pesquisa_pessoal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pesquisa_pessoal)
{
    ui->setupUi(this);
}

pesquisa_pessoal::~pesquisa_pessoal()
{
    delete ui;
}
