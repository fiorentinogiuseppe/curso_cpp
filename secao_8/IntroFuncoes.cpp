//
// Created by giuseppe on 16/04/2020.
//
#include <iostream>

int soma(int n1, int n2){
    return n1+n2;
}

void Mensagem(){
    std::cout << "\nMensagem de Marte... Chegamos bem..." << std::endl;
}

int main(){
    int Numero, Numero1, Soma;
    std:: cout << "Digite um numero: " << std::endl;
    std::cin >> Numero;
    std:: cout << "Digite outro numero: " << std::endl;
    std::cin >> Numero1;

    std::cout << "A soma de " << Numero  << " com "<< Numero1 << " eh " << soma(Numero, Numero1) << std::endl;
    Mensagem();

    return 0;
}