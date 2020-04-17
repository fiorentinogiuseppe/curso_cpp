//
// Created by giuseppe on 17/04/2020.
//

#include<iostream>

int main (){
    int Numero{1024};
    char Letra{'A'};
    int &Ref = Numero;

    std::cout << "Valor de numero usando ref: " << Ref << std::endl;
    std::cout << "Valor de endereceo de numero: " << &Numero << std::endl;
    std::cout << "Valor de endereceo de  ref: " << Ref << std::endl;

    return 0;
}