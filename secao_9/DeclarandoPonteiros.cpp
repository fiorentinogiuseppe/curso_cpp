//
// Created by giuseppe on 16/04/2020.
//

#include<iostream>

int main(){

    int* Ptr = nullptr;
    int Numero = 101;

    Ptr = &Numero;


    std::cout << "Endereco de Numero: " << &Numero << std::endl;
    std::cout << "Endereco de ptr: " << &Ptr << std::endl;
    (*Ptr)++;
    std::cout << "Valor de ptr: " << *Ptr << std::endl;

    return 0;
}
