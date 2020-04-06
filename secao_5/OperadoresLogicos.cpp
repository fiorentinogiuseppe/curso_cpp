//
// Created by giuseppe on 06/04/2020.
//

#include <iostream>

int main(){


    double Numero;
    bool MaiorQue100, ResultadoLogico;

    std::cout << "Digite um numero: ";
    std::cin >> Numero;
    std::cout << "True = 1 e False = 0" << std::endl;
    MaiorQue100 = (Numero>100);
    ResultadoLogico = ((Numero >100) && (Numero!=0));
    std::cout << "Numero eh maior que 100? " << MaiorQue100 << std::endl;
    std::cout << "Resultado da expressao ((Numero >100) && (Numero!=0)) eh?  " << ResultadoLogico << std::endl;

    return 0;
}
