//
// Created by giuseppe on 17/04/2020.
//

#include<iostream>

int main (){
    int Numero{1024};
    int Numero2{2024};
    int* ptr = &Numero;
    int &RefNum = Numero2;
    RefNum = 5644;
    *ptr = 4048;

    std::cout << "Valor de numero: " << *ptr << std::endl;

    std::cout << "Valor de endereceo de numero: " << &Numero << std::endl;
    std::cout << "Valor de endereceo de numero: " << &Numero << std::endl;


    return 0;
}