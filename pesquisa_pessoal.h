#ifndef PESQUISA_PESSOAL_H
#define PESQUISA_PESSOAL_H

#include <QDialog>

namespace Ui {
class pesquisa_pessoal;
}

class pesquisa_pessoal : public QDialog
{
    Q_OBJECT

public:
    explicit pesquisa_pessoal(QWidget *parent = nullptr);
    ~pesquisa_pessoal();

private:
    Ui::pesquisa_pessoal *ui;
};

#endif // PESQUISA_PESSOAL_H
