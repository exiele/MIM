#include "tabela_edit.h"
#include "ui_tabela_edit.h"


tabela_edit::tabela_edit(QWidget *parent ,QString nome_tabela) :
    QDialog(parent),
    ui(new Ui::tabela_edit)
{
    ui->setupUi(this);
    nome = nome_tabela;
    criarCabecalhos();
    preencherTabela();
}

tabela_edit::~tabela_edit()
{
    delete ui;
}
void tabela_edit::criarCabecalhos(){
    query.prepare("SELECT column_name FROM information_schema.columns WHERE table_schema = 'public' AND table_name   = '"+nome+"'");
    if(query.exec()){
        QStringList cabecalhos;
        int linha = 0;
        ui->tableWidget->setColumnCount(query.size());
        while(query.next()){
            if(linha==0){
                chave = query.value(0).toString();

            }
            cabecalhos.append(query.value(0).toString());
            ui->tableWidget->setColumnWidth(linha,query.value(0).toString().size()*14);
            linha++;
        }
        ui->tableWidget->setHorizontalHeaderLabels(cabecalhos);
    }
    else {
        QMessageBox::warning(this,"Erro","Erro ao carregar cabeçalhos da tabela " + nome);
    }
}
void tabela_edit::preencherTabela(){


    query.prepare("SELECT * FROM " + nome + " ORDER BY " + chave + " LIMIT "+QString::number(salto)+" OFFSET " + QString::number(pagina));
    if(query.exec()){
        int linha = 0;
        int colunas = query.record().count();
        ui->tableWidget->setColumnCount(colunas);
        int count;
        int tamanhoColuna;
        while(query.next()){
            ui->tableWidget->insertRow(linha);
            for (count = colunas-1;count>=0 ; count-- ) {
                ui->tableWidget->setItem(linha,count,new QTableWidgetItem(query.value(count).toString()));
                tamanhoColuna = query.value(count).toString().size()*14;
                if(ui->tableWidget->columnWidth(count)<tamanhoColuna){
                    ui->tableWidget->setColumnWidth(count,tamanhoColuna);
                }


            }
            ui->tableWidget->setRowHeight(linha,30);
            linha++;

        }
    }

    else {
        QMessageBox::warning(this,"Erro","Erro ao carregar tabela " + nome);
    }
    qDebug()<< query.lastQuery();
}

void tabela_edit::on_vizualizar_clicked()
{

}

void tabela_edit::on_proximapagina_clicked()
{
    ui->tableWidget->setRowCount(0);
    pagina+=salto;
    ui->pagina->setText("Página "+QString::number(pagina/salto+1));
    preencherTabela();
}

void tabela_edit::on_paginaanterior_clicked()
{
    if(pagina>0){
        ui->tableWidget->setRowCount(0);
        pagina-=salto;
        ui->pagina->setText("Página "+QString::number(pagina/salto+1));
        preencherTabela();
    }

}
