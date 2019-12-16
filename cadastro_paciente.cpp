#include "cadastro_paciente.h"
#include "ui_cadastro_paciente.h"

cadastro_paciente::cadastro_paciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro_paciente)
{
    ui->setupUi(this);
    ui->cpfLineEdit->setEnabled(false);
    ui->responsavelLineEdit->setEnabled(false);
    QString time_format = "yyyy-MM-dd";
    QDateTime dt = QDateTime::currentDateTime();
    ui->dataNascLineEdit->setText(dt.toString(time_format));
}

cadastro_paciente::~cadastro_paciente()
{
    delete ui;
}

void cadastro_paciente::on_pushButton_2_clicked()
{
    this->close();
}

void cadastro_paciente::on_responsavelCheckBox_stateChanged(int arg1)
{
    if(arg1==0){
        ui->responsavelLineEdit->setEnabled(false);
    }
    else{
        ui->responsavelLineEdit->setEnabled(true);
    }
}

void cadastro_paciente::on_cpfCheckBox_stateChanged(int arg1)
{
    if(arg1==0){
        ui->cpfLineEdit->setEnabled(false);

    }
    else{
        ui->cpfLineEdit->setEnabled(true);


    }
}

void cadastro_paciente::on_pushButton_clicked()
{
    QString nome = "NULL";
    QString prontuario = "NULL";
    QString sexo = "NULL";
    QString data = "NULL";
    QString possuiCPF = "NULL";
    QString possuiResponsavel = "NULL";
    QString cpf = "NULL";
    QString responsavel = "NULL";
    QString logradouro = "NULL";
    QString numero = "NULL";
    QString complemento = "NULL";
    QString bairro = "NULL";
    QString cep = "NULL";
    QString uf = "NULL";
    QString telefone1 = "NULL";
    QString telefone2 = "NULL";
    QString cod_cidade = "NULL";

    QSqlQuery query;
    nome = ui->nomeLineEdit->text();
    prontuario = ui->prontuarioLineEdit->text();

    if(ui->sexoComboBox->currentText()== "Masculino"){
        sexo = "0";
    }
    else {
        sexo = "1";
    }
    data = ui->dataNascLineEdit->text();
    if(ui->cpfCheckBox->isChecked()){
        possuiCPF = "1";
        cpf = ui->cpfLineEdit->text();
    }
    else{
        possuiCPF = "0";
    }


    if(ui->responsavelCheckBox->isChecked()){
        possuiResponsavel = "1";
    }
    else{
        possuiResponsavel="0";
    }

    responsavel = ui->responsavelLineEdit->text();
    logradouro = ui->logradouroLineEdit->text();
    numero = ui->numeroLineEdit->text();
    complemento = ui->complementoLineEdit->text();
    bairro = ui->bairroLineEdit->text();
    cep = ui->cepLineEdit->text();
    uf = ui->ufLineEdit->text();
    telefone1 = ui->telefoneLineEdit->text();
    telefone2 = ui->telefoneLineEdit_2->text();
    cod_cidade = "";
    if(query.exec("SELECT cod_municipio FROM public.tabcep WHERE cod_cep = '"+cep+"'")){
        while (query.next()) {
            cod_cidade = query.value(0).toString();
        }
    }
    //nome notnull
    if(ui->nomeLineEdit->text()==""){
        QMessageBox::information(this,"","É preciso digitar um nome");
        return;
    }
    //verifica se cpf já existe
    if(ui->cpfCheckBox->isChecked()){
        if(query.exec("SELECT * FROM paciente WHERE cpf_paciente='"+cpf+"'")){
            int count = 0;
            while (query.next()) {
                count++;
            }
            if(count>0){
                QMessageBox::information(this,"","CPF já está cadastrado");
                ui->cpfLineEdit->setFocus();
                return;
            }
        }
    }

    //verifica se nome já existe
    if(query.exec("SELECT * FROM paciente WHERE nome_paciente='"+nome+"'")){
        int count = 0;
        while (query.next()) {
            count++;
        }
        if(count>0){
            QMessageBox::information(this,"","nome já está cadastrado");
            ui->nomeLineEdit->setFocus();
            return;
        }
    }


    query.prepare("INSERT INTO public.paciente("
                  "prontuario, nome_paciente, sexo_paciente, data_nascimento, possui_cpf, cpf_paciente, possui_responsavel, responsavel, logradouro, numero, complemento, bairro, cep, sigla_uf, cod_cidade, telefone1, telefone2)"
                  "VALUES ('"+prontuario+"', '"+nome+"', '"+sexo+"', '"+data+"', '"+possuiCPF+"', '"+cpf+"', '"+possuiResponsavel+"', '"+responsavel+"', '"+logradouro+"', '"+numero+"', '"+complemento+"', '"+bairro+"', '"+cep+"', '"+uf+"', '"+cod_cidade+"', '"+telefone1+"', '"+telefone2+"')");

    if(query.exec()){
        QMessageBox::information(this,"","cadastro realizado com sucesso");
    }
    else{
        qDebug()<<query.lastError().text();
        qDebug()<<query.lastQuery();
    }

}
