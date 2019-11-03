#include "janelalogin.h"
#include "ui_janelalogin.h"

janelaLogin::janelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::janelaLogin)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1:5432");
    db.setDatabaseName("MIM");
    db.setUserName("postgres");
    db.setPassword("crisroot");

    if(db.open()){
        ui->label_dbopen->setText("banco de dados aberto");
    }
    else {
        ui->label_dbopen->setText("erro ao abrir banco de dados");
    }
}

janelaLogin::~janelaLogin()
{
    delete ui;
}

