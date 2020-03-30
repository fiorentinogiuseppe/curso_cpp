//
// Created by giuseppe on 30/03/2020.
//
#include <iostream>
#include "utils.h"
#include<iomanip>


int main(){
    int Numero;
    float Numero2;
    double Numero3;
    Numero = 45;
    Numero2 = 55.56f;
    Numero3 = 45445.904555;

    std::cout << "Numero: " << Numero << std::endl;
    std::cout << "Tamanho da variavel: " << sizeof(Numero) << "Bytes" <<std::endl;
    std::cout << "Endereco de memoria: " << &Numero <<std::endl;

    std::cout << "Numero2: " << Numero2 << std::endl;
    std::cout << "Tamanho da variavel: " << sizeof(Numero2) << "Bytes" <<std::endl;
    std::cout << "Endereco de memoria: " << &Numero2 <<std::endl;

    std::cout << "Numero3: " << std::setprecision(12) << Numero3 << std::endl;
    std::cout << "Tamanho da variavel: " << sizeof(Numero3) << "Bytes" <<std::endl;
    std::cout << "Endereco de memoria: " << &Numero3 <<std::endl;
    //sistema("PAUSE");
    return 0;
}