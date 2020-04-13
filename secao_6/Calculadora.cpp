//
// Created by giuseppe on 13/04/2020.
//

#include <iostream>
#include <string>

int main(void){
    int Num1, Num2;
    char Operacao;

    std::cout << "Digite um numero: ";
    std::cin >> Num1;
    std::cout << "Digite outro numero: ";
    std::cin >> Num2;

    std::cout<< "Escolha a operacao\n + Adicao \n - Subtracao \n * Multiplicacao \n / Divisao \n";
    std::cout << "Operacao escolhida: ";
    std::cin >> Operacao;

    switch (Operacao){
        case '+':
            std::cout << ">> Num1 + Nume = " << Num1 + Num2 << std::endl;
            break;
        case '-':
            std::cout << ">> Num1 - Nume = " << Num1 - Num2 << std::endl;
            break;
        case '*':
            std::cout << ">> Num1 * Nume = " << Num1 * Num2 << std::endl;
            break;
        case '/':
            std::cout << ">> Num1 / Nume = " << Num1 / Num2 << std::endl;
            break;
        default:
            std::cout << "Operador invalido ";
            break;
    }



    return 0;
}