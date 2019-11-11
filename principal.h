#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QDialog>

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

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
