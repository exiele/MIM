#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QDialog>
#include <cadastro_pessoal.h>
#include <cadastro_paciente.h>
#include <tabela_edit.h>

namespace Ui {
class principal;
}

class principal : public QDialog
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = nullptr);
    ~principal();

private slots:
    void on_botao_sair_clicked();

    void on_cadPessoal_clicked();

    void on_cadPaciente_clicked();

    void on_pessoal_clicked();

    void on_permissoes_clicked();

    void on_Produto_clicked();

    void on_tipProduto_clicked();

    void on_apresentacao_clicked();

    void on_forFarmaceutica_clicked();

    void on_interacao_clicked();

    void on_claTerapeutica_clicked();

    void on_setor_clicked();

    void on_bibliografia_clicked();

    void on_priAtivo_clicked();

    void on_uf_clicked();

    void on_modCompra_clicked();

    void on_uniConcentracao_clicked();

    void on_municipio_clicked();

    void on_alergias_clicked();

    void on_medxPAtivo_clicked();

    void on_cep_clicked();

    void on_cid_clicked();

    void on_pAtivoxPAtivo_clicked();

    void on_Fabricante_clicked();

    void on_motAlta_clicked();

    void on_conEstoque_clicked();

    void on_Fornecedor_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
