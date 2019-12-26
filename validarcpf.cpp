#include "validarcpf.h"

validarCPF::validarCPF(){


}

bool validarCPF::validar(QString cpfString){
    int digito1;
    int digito2;
    int temp = 0;
    QList<int> cpf;
    for(int i = 0;i<cpfString.length();i++){
        cpf.append(cpfString.at(i).digitValue());
    }
    for(int i = 0; i<9; i++){
        temp += cpf.at(i) * (10 - i);
    }
    temp %= 11;
    if(temp<2){
        digito1 = 0;
    }
    else{
        digito1 = 11 - temp;
    }
    temp = 0;
    for(int i = 0; i<10; i++){
        temp += cpf.at(i) * (11 - i);
    }
    temp %= 11;
    if(temp<2){
        digito2 = 0;
    }
    else{
        digito2 = 11 - temp;
    }
    return digito1==cpf.at(9) && digito2==cpf.at(10);
}
