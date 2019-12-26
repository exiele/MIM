#ifndef TABELA_EDIT_H
#define TABELA_EDIT_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class tabela_edit;
}

class tabela_edit : public QDialog
{
    Q_OBJECT

public:
    explicit tabela_edit(QWidget *parent = nullptr, QString nome_tabela ="");
    ~tabela_edit();
    void set_Nome_Tabela(QString);


private slots:
    void on_vizualizar_clicked();
    void criarCabecalhos();
    void preencherTabela();
    void on_proximapagina_clicked();

    void on_paginaanterior_clicked();

private:
    Ui::tabela_edit *ui;
    QString nome;
    int pagina = 0;
    int salto = 20;
    QString chave;
    QSqlQuery query;
};

#endif // TABELA_EDIT_H
