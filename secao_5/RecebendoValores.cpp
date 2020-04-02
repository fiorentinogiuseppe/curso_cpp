//
// Created by giuseppe on 01/04/2020.
//

#include <iostream>

int main(){
    float Numero01, Numero02;
    float Soma, Subtracao, Multiplicacao, Divisao;
    int Resto;
    bool comparacao, diferente, maior, menor, maiorigual, menorigual;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01; // Colocar o valor digitado no stdin na variavel Numero01. Recebe o dado e quebra a linha
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02; // Colocar o valor digitado no stdin na variavel Numero02. Recebe o dado e quebra a linha

    std::cout << "Numero01 = " << Numero01 << std::endl;
    std::cout << "Numero02 = " << Numero02 <<std::endl;

    Soma = Numero01+Numero02;
    Subtracao = Numero01-Numero02;
    Multiplicacao = Numero01*Numero02;
    Divisao = Numero01/Numero02;
    Resto =(int) Numero01 % (int) Numero02;
    std::cout << "A soma dos dois numeros: " << Soma << std::endl;
    std::cout << "A subtração dos dois numeros: " << Subtracao << std::endl;
    std::cout << "A Multiplicacao dos dois numeros: " << Multiplicacao << std::endl;
    std::cout << "A Divisao dos dois numeros: " << Divisao << std::endl;
    std::cout << "O resto da divisao dos dois numeros: " << Resto << std::endl;

    comparacao = (Numero01 == Numero02);
    std::cout << "NUmero01 é igual ao Numero02? " << comparacao << std::endl;
    diferente = (Numero01 != Numero02);
    std::cout << "NUmero01 é diferente ao Numero02? " << diferente << std::endl;
    maior = (Numero01 > Numero02);
    std::cout << "NUmero01 é maior ao Numero02? " << maior << std::endl;
    menor = (Numero01 < Numero02);
    std::cout << "NUmero01 é menor ao Numero02? " << menor << std::endl;
    maiorigual = (Numero01 >= Numero02);
    std::cout << "NUmero01 é maior igual ao Numero02? " << maiorigual << std::endl;
    menorigual = (Numero01 <= Numero02);
    std::cout << "NUmero01 é menor igual ao Numero02? " << menorigual << std::endl;

    return 0;
}