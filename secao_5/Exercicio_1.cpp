//
// Created by giuseppe on 01/04/2020.
//

#include <iostream>

int main(){
    float Numero01, Numero02, Numero03, Media;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02;
    std::cout << "Digite o terceiro numero: ";
    std::cin >> Numero03;

    std::cout << "Numero01 = " << Numero01 << std::endl;
    std::cout << "Numero02 = " << Numero02 <<std::endl;
    std::cout << "Numero03 = " << Numero03 <<std::endl;

    Media = (Numero01+Numero02+Numero03)/3;

    std::cout << "A media dos tres numeros: " << Media << std::endl;

    return 0;
}
