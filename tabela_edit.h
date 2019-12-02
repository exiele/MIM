#ifndef TABELA_EDIT_H
#define TABELA_EDIT_H

#include <QDialog>

namespace Ui {
class tabela_edit;
}

class tabela_edit : public QDialog
{
    Q_OBJECT

public:
    explicit tabela_edit(QWidget *parent = nullptr);
    ~tabela_edit();
    void set_Nome_Tabela(QString);

private:
    Ui::tabela_edit *ui;
};

#endif // TABELA_EDIT_H
