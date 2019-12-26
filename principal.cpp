#include "principal.h"
#include "ui_principal.h"

principal::principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
}

principal::~principal()
{
    delete ui;
}

void principal::on_botao_sair_clicked()
{
    this->close();
}

void principal::on_cadPessoal_clicked()
{
    cadastro_pessoal cadastro;
    cadastro.exec();
}

void principal::on_cadPaciente_clicked()
{
    cadastro_paciente cadastro;
    cadastro.exec();
}

void principal::on_pessoal_clicked()
{
    tabela_edit tabela(nullptr,"pessoal");
    tabela.exec();
}

void principal::on_permissoes_clicked()
{
    tabela_edit tabela(nullptr,"permissoes");
    tabela.exec();
}

void principal::on_Produto_clicked()
{
    tabela_edit tabela(nullptr,"produto");
    tabela.exec();
}

void principal::on_tipProduto_clicked()
{
    tabela_edit tabela(nullptr,"tipoproduto");
    tabela.exec();
}

void principal::on_apresentacao_clicked()
{
    tabela_edit tabela(nullptr,"apresentacao");
    tabela.exec();
}

void principal::on_forFarmaceutica_clicked()
{
    tabela_edit tabela(nullptr,"formafarmaceutica");
    tabela.exec();
}

void principal::on_interacao_clicked()
{
    tabela_edit tabela(nullptr,"interacao");
    tabela.exec();
}

void principal::on_claTerapeutica_clicked()
{
    tabela_edit tabela(nullptr,"classificacaoterapeutica");
    tabela.exec();
}

void principal::on_setor_clicked()
{
    tabela_edit tabela(nullptr,"setor");
    tabela.exec();
}

void principal::on_bibliografia_clicked()
{
    tabela_edit tabela(nullptr,"bibliografia");
    tabela.exec();
}

void principal::on_priAtivo_clicked()
{
    tabela_edit tabela(nullptr,"principioativo");
    tabela.exec();
}

void principal::on_uf_clicked()
{
    tabela_edit tabela(nullptr,"uf");
    tabela.exec();
}

void principal::on_modCompra_clicked()
{
    tabela_edit tabela(nullptr,"modalidadecompra");
    tabela.exec();
}

void principal::on_uniConcentracao_clicked()
{
    tabela_edit tabela(nullptr,"unidadeconcentracao");
    tabela.exec();
}

void principal::on_municipio_clicked()
{
    tabela_edit tabela(nullptr,"municipio");
    tabela.exec();
}

void principal::on_alergias_clicked()
{
    tabela_edit tabela(nullptr,"alergias");
    tabela.exec();
}

void principal::on_medxPAtivo_clicked()
{
    tabela_edit tabela(nullptr,"produtoprincipioativo");
    tabela.exec();
}

void principal::on_cep_clicked()
{
    tabela_edit tabela(nullptr,"tabcep");
    tabela.exec();
}

void principal::on_cid_clicked()
{
    tabela_edit tabela(nullptr,"cid10");
    tabela.exec();
}

void principal::on_pAtivoxPAtivo_clicked()
{
    tabela_edit tabela(nullptr,"paintpa");
    tabela.exec();
}

void principal::on_Fabricante_clicked()
{
    tabela_edit tabela(nullptr,"fabricante");
    tabela.exec();
}

void principal::on_motAlta_clicked()
{
    tabela_edit tabela(nullptr,"motivo");
    tabela.exec();
}

void principal::on_conEstoque_clicked()
{
    tabela_edit tabela(nullptr,"estoque");
    tabela.exec();
}

void principal::on_Fornecedor_clicked()
{
    tabela_edit tabela(nullptr,"fornecedor");
    tabela.exec();
}
