#include "cadastro.h"
#include "ui_cadastro.h"

cadastro::cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
    this->setWindowTitle("Cadastro");
}

cadastro::~cadastro()
{
    delete ui;
}

void cadastro::on_pushButton_2_clicked()
{
    QString usuario = ui->line_usuario->text();
    QString senha = ui->line_senha->text();
    QString confirm = ui->line_confirmar->text();
    QByteArray hash = QCryptographicHash::hash(senha.toLocal8Bit(),QCryptographicHash::Md5);
    QString senhaHash = hash.toHex();
    if(!(senha == confirm)){
        QMessageBox::information(this,"","senhas digitadas não são iguais");
        return;
    }

    QSqlQuery query;

    if(query.exec("SELECT * FROM \"MIM\".pessoal WHERE usuario='"+usuario+"'")){
        int count = 0;
        while (query.next()) {
            count++;
        }
        if(count>0){
            QMessageBox::information(this,"","Usuário já existe");
            ui->line_usuario->setFocus();
            return;
        }
    }

    query.prepare("INSERT INTO \"MIM\".pessoal("
                  "usuario, senha)"
                  "VALUES ('"+usuario+"', '"+senhaHash+"')");
    if(query.exec()){
        QMessageBox::information(this,"","cadastro realizado com sucesso");
        ui->line_usuario->clear();
        ui->line_senha->clear();
        ui->line_confirmar->clear();
        ui->line_usuario->setFocus();
    }
    else{
        qDebug()<<"erro ao inserir registro";
    }
}

void cadastro::on_pushButton_clicked()
{
    this->close();
}
