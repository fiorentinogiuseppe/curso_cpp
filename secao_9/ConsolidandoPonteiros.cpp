//
// Created by giuseppe on 17/04/2020.
//

#include <iostream>

int main(){
    int Numero{4096};

    int *ptr = &Numero;

    std::cout << "Valor da variavel numero: " << Numero << std::endl;
    std::cout << "Valor da variavel ptr: " << ptr << std::endl;
    std::cout << "Valor do endereco numero: " << &Numero << std::endl;
    std::cout << "Valor da endereco ptr: " << &ptr << std::endl;
    std::cout << "Valor da contido em ptr: " << *ptr << std::endl;

    *ptr = 2963;
    std::cout << "Valor da contido em ptr: " << *ptr << std::endl;


    return 0;
}