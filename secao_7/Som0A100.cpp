//
// Created by giuseppe on 13/04/2020.
//

#include <iostream>

int main (void){
    int Soma = 0;
    for(int Nume = 1; Nume <= 100; Nume++){
        Soma += Nume;
    }

    std::cout << "A soma de 1 ate 100 eh: " << Soma << std::endl;

    return 0;
}