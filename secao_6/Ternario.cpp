//
// Created by giuseppe on 13/04/2020.
//

#include <iostream>

int main(void){
    double MaiorNumero, Numero1, Numero2;

    std::cout << "Digite primeiro Numero: ";
    std::cin >> Numero1;
    std::cout << "Digite segundo Numero: ";
    std::cin >> Numero2;

    MaiorNumero = (Numero1 > Numero2) ? Numero1 : Numero2;
    std::cout << "Maior Numero eh: " << MaiorNumero << std::endl;

    (Numero1 > Numero2) ? std::cout << "Numero01 maior que Numero02" << std::endl : std::cout << "Numero02 maior que Numero01" << std::endl;

    return 0;
}
