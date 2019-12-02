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
    QString usuario = ui->lineUsuario->text();
    QString senha = ui->lineSenha->text();
    QString confirm = ui->lineConfirmar->text();
    QByteArray hash = QCryptographicHash::hash(senha.toLocal8Bit(),QCryptographicHash::Md5);
    QString senhaHash = hash.toHex();
    QString grupo = ui->lineGrupo->text();
    QString situacao = ui->lineSituacao->text();
    QString nome = ui->lineNome->text();
    QString cpf = ui->lineCPF->text();
    QString matricula = ui->lineMatricula->text();
    QString conselho = ui->lineConselho->text();
    QString logradouro = ui->lineLogradouro->text();
    QString numero = ui->lineNumero->text();
    QString complemento = ui->lineCOmplemento->text();
    QString bairro = ui->lineBairro->text();
    QString uf = ui->lineUF->text();
    QString cep = ui->lineCEP->text();
    QString email = ui->lineEmail->text();
    QString telefone = ui->lineTelefone->text();
    QString celular = ui->lineCelular->text();
    QString setor = ui->lineSetor->text();
    QString cargo = ui->lineCargo->text();
    QString time_format = "yyyy-MM-dd  HH:mm:ss";
    QDateTime dt = QDateTime::currentDateTime();
    QString data = dt.toString(time_format);
    QString cod_cidade = "";
    if(!(senha == confirm)){
        QMessageBox::information(this,"","senhas digitadas não são iguais");
        return;
    }


    QSqlQuery query;

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

    if(query.exec("SELECT cod_municipio FROM public.tabcep WHERE cod_cep = '"+cep+"' AND sigla_uf ='"+uf+"';")){
        cod_cidade = query.first();
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
        qDebug()<<"erro ao inserir registro";
    }
}

void cadastro::on_pushButton_clicked()
{
    this->close();
}
