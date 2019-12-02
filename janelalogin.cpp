#include "janelalogin.h"
#include "ui_janelalogin.h"


QSqlDatabase static db = QSqlDatabase::addDatabase("QPSQL");

janelaLogin::janelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::janelaLogin)
{
    ui->setupUi(this);


    db.setHostName("localhost");
    db.setDatabaseName("postgres");
    db.setUserName("postgres");
    db.setPassword("crisroot");
    if(db.open()){
        qDebug()<<"banco de dados aberto";
    }
    else {
        qDebug()<<"não foi possível abrir banco de dados";
    }
    db.open();

}

janelaLogin::~janelaLogin()
{
    delete ui;
}


void janelaLogin::on_botao_conectar_clicked()
{
    QString usuario = ui->user->text();
    QString senha = ui->passwd->text();
    QByteArray hash = QCryptographicHash::hash(senha.toLocal8Bit(),QCryptographicHash::Md5);
    QString senhaHash = hash.toHex();
    if(!db.isOpen()){
        qDebug()<<"banco de dados não está aberto";
        return;
    }

    QSqlQuery querry;
    if(querry.exec("SELECT * FROM pessoal WHERE login_usuario='"+usuario+"' and senha='"+senhaHash+"'")){
        int count = 0;
        while (querry.next()) {
            count++;
            qDebug()<<"count:"<< count;
        }
        if(count>0){
            this->hide();
            principal p;
            p.setModal(true);
            p.exec();
        }
        else{
            ui->saida->setText("login ou senha inválidos");
            ui->user->clear();
            ui->passwd->clear();
            ui->user->setFocus();
        }
    }
    else{
        qDebug() << "querry falhou";
    }
    this->show();
    ui->user->clear();
    ui->passwd->clear();
}


