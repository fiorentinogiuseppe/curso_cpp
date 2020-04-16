//
// Created by giuseppe on 16/04/2020.
//
#include <iostream>
#include "Matematica.h"

int main(){

    float Numero1, Numero2;

    std::cout  << "Digite Primerio nuemro" << std::endl;
    std::cin >> Numero1;
    std::cout  << "Digite Segundo nuemro" << std::endl;
    std::cin >> Numero2;

    std::cout << "Resultado operadores Matematica "<< std::endl;
    std::cout << "Soma "<< Soma((int)Numero1,(int)Numero2) <<std::endl;
    std::cout << "Subtração "<< Subtracao((int)Numero1,(int)Numero2) <<std::endl;
    std::cout << "Multiplicação "<< Multiplicacao((int)Numero1,(int)Numero2) <<std::endl;
    std::cout << "Divisão "<< Divisao(Numero1,Numero2) <<std::endl;
    std::cout << "Potenciação "<< Potencia(Numero1,(int)Numero2) <<std::endl;
    std::cout << "Raiz "<< Raiz(Numero1,(int)Numero2) <<std::endl;

    return 0;
}



