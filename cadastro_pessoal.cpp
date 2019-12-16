#include "cadastro_pessoal.h"
#include "ui_cadastro_pessoal.h"

cadastro_pessoal::cadastro_pessoal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro_pessoal)
{
    ui->setupUi(this);
    this->setWindowTitle("Cadastro");
    QSqlQuery query;
    if(query.exec("SELECT grupo FROM permissoes")){
        while (query.next()) {
            QString grupo = query.value(0).toString();
            ui->grupoComboBox->addItem(grupo);
            qDebug()<<grupo;
        }
    }
}

cadastro_pessoal::~cadastro_pessoal()
{
    delete ui;
}

void cadastro_pessoal::on_pushButton_2_clicked()
{
    QSqlQuery query;
    QString grupo = "NULL";
    QString situacao = "NULL";
    QString nome = "NULL";
    QString cpf = "NULL";
    QString matricula = "NULL";
    QString conselho = "NULL";
    QString logradouro = "NULL";
    QString numero = "NULL";
    QString complemento = "NULL";
    QString bairro = "NULL";
    QString uf = "NULL";
    QString cep = "NULL";
    QString email = "NULL";
    QString telefone = "NULL";
    QString celular = "NULL";
    QString setor = "NULL";
    QString cargo = "NULL";
    QString cod_cidade = "NULL";


    QString usuario = ui->lineUsuario->text();
    QString senha = ui->lineSenha->text();
    QString confirm = ui->lineConfirmar->text();
    QByteArray hash = QCryptographicHash::hash(senha.toLocal8Bit(),QCryptographicHash::Md5);
    QString senhaHash = hash.toHex();
    grupo = ui->grupoComboBox->currentText();
    situacao = ui->lineSituacao->text();
    nome = ui->lineNome->text();
    cpf = ui->lineCPF->text();
    matricula = ui->lineMatricula->text();
    conselho = ui->lineConselho->text();
    logradouro = ui->lineLogradouro->text();
    numero = ui->lineNumero->text();
    complemento = ui->lineCOmplemento->text();
    bairro = ui->lineBairro->text();
    uf = ui->lineUF->text();
    cep = ui->lineCEP->text();
    email = ui->lineEmail->text();
    telefone = ui->lineTelefone->text();
    celular = ui->lineCelular->text();
    setor = ui->lineSetor->text();
    cargo = ui->lineCargo->text();
    QString time_format = "yyyy-MM-dd  HH:mm:ss";
    QDateTime dt = QDateTime::currentDateTime();
    QString data = dt.toString(time_format);
    if(!(senha == confirm)){
        QMessageBox::information(this,"","senhas digitadas não são iguais");
        return;
    }


    //login notnull
    if(ui->lineUsuario->text()==""){
        QMessageBox::information(this,"","É preciso digitar um usuario");
        return;
    }
    //senha notnull
    if(ui->lineSenha->text()==""){
        QMessageBox::information(this,"","É preciso digitar uma senha");
        return;
    }
    //Verifica se usuario já existe
    if(query.exec("SELECT * FROM pessoal WHERE usuario='"+usuario+"'")){
        int count = 0;
        while (query.next()) {
            count++;
        }
        if(count>0){
            QMessageBox::information(this,"","Usuário já existe");
            ui->lineUsuario->setFocus();
            return;
        }
    }
    //verifica se nome já existe
    if(query.exec("SELECT * FROM pessoal WHERE nome_pessoal='"+nome+"'")){
        int count = 0;
        while (query.next()) {
            count++;
        }
        if(count>0){
            QMessageBox::information(this,"","Nome já está cadastrado");
            ui->lineUsuario->setFocus();
            return;
        }
    }
    //verifica se cpf já existe
    if(query.exec("SELECT * FROM pessoal WHERE cpf_pessoal='"+cpf+"'")){
        int count = 0;
        while (query.next()) {
            count++;
        }
        if(count>0){
            QMessageBox::information(this,"","CPF já está cadastrado");
            ui->lineUsuario->setFocus();
            return;
        }
    }

    if(query.exec("SELECT cod_municipio FROM public.tabcep WHERE cod_cep = '"+cep+"'")){
        while (query.next()) {
            cod_cidade = query.value(0).toString();
            qDebug()<<cod_cidade;
            qDebug()<<query.lastQuery();
        }
    }

    query.prepare("INSERT INTO pessoal(login_usuario, grupo, senha, situacao, data_hora_pessoal, nome_pessoal, cpf_pessoal, matricula_pessoal, conselho, logradouro, numero, complemento, bairro, cep, sigla_uf, cod_cidade, email, telefone, celular, cod_setor, cargo) "
                  "VALUES ('"+usuario+"','"+grupo+"', '"+senhaHash+"','"+situacao+"','"+data+"','"+nome+"','"+cpf+"','"+matricula+"','"+conselho+"','"+logradouro+"','"+numero+"','"+complemento+"','"+bairro+"','"+cep+"','"+uf+"','"+cod_cidade+"','"+email+"','"+telefone+"','"+celular+"','"+setor+"','"+cargo+"')");
    if(query.exec()){
        QMessageBox::information(this,"","cadastro realizado com sucesso");
        ui->lineUsuario->clear();
        ui->lineSenha->clear();
        ui->lineConfirmar->clear();
        ui->lineUsuario->setFocus();

    }
    else{
        qDebug()<<query.lastError().text();
        qDebug()<<query.lastQuery();
    }
}

void cadastro_pessoal::on_pushButton_clicked()
{
    this->close();
}
