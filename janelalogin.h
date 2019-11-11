#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
#include <principal.h>
#include <cadastro.h>
#include <QCryptographicHash>

QT_BEGIN_NAMESPACE
namespace Ui { class janelaLogin; }
QT_END_NAMESPACE

class janelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    janelaLogin(QWidget *parent = nullptr);
    ~janelaLogin();

private slots:

    void on_botao_conectar_clicked();

    void on_botao_cadastrar_clicked();

private:
    Ui::janelaLogin *ui;
};
#endif // JANELALOGIN_H
