#ifndef PERMISSOES_H
#define PERMISSOES_H

#include <QDialog>

namespace Ui {
class permissoes;
}

class permissoes : public QDialog
{
    Q_OBJECT

public:
    explicit permissoes(QWidget *parent = nullptr);
    ~permissoes();

private:
    Ui::permissoes *ui;
};

#endif // PERMISSOES_H
