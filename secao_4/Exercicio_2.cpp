//
// Created by giuseppe on 31/03/2020.
//
#include <iostream>
#include<iomanip>


int main(){
    int VariavelInteira = 5;
    float VariavelFloat = 5.55f;
    double VariavelDouble = 3.141592;
    char VariavelChar = 'a';

    std::cout << "++++++++++INTEIRO++++++++++" << std::endl;
    std::cout << "VALOR: " << VariavelInteira << std::endl;
    std::cout << "TAMANHO: " << sizeof(VariavelInteira) << std::endl;
    std::cout << "ENDERECO: " << &VariavelInteira << std::endl;
    std::cout << "+++++++++++FLOAT+++++++++++"<< std::endl;
    std::cout << "VALOR: " << VariavelFloat << std::endl;
    std::cout << "TAMANHO: " << sizeof(VariavelFloat) << std::endl;
    std::cout << "ENDERECO: " << &VariavelFloat << std::endl;
    std::cout << "++++++++++DOUBLE+++++++++++"<< std::endl;
    std::cout << "VALOR: " << std::setprecision(12) << VariavelDouble << std::endl;
    std::cout << "TAMANHO: " << sizeof(VariavelDouble) << std::endl;
    std::cout << "ENDERECO: " << &VariavelDouble << std::endl;
    std::cout << "+++++++++++CHAR++++++++++++"<< std::endl;
    std::cout << "VALOR: " << VariavelChar << std::endl;
    std::cout << "TAMANHO: " << sizeof(VariavelChar) << std::endl;
    std::cout << "ENDERECO: " << (void*) &VariavelChar << std::endl;

    return 0;
}

