//
// Created by giuseppe on 16/04/2020.
//
#include<iostream>

int main(){

    setlocale(LC_ALL, "portuguese");
    int Numero = 10;
    double Salario = 4567.90;

    std::cout << "Tamanho variavel Numero "<< sizeof(Numero) <<"Bytes" << std::endl;
    std::cout << "Endereço de memoria da variavel Numero "<< &Numero << std::endl;
    std::cout << "Tamanho variavel Salario "<< sizeof(Salario) <<"Bytes" << std::endl;
    std::cout << "Endereço de memoria da variavel Salario "<< &Salario << std::endl;
    return 0;
}

