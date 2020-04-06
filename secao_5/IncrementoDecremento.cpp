//
// Created by giuseppe on 06/04/2020.
//

#include <iostream>

int main(){
    int Nume1{ 10 };
    int Nume2 { 20 };
    int Resultado;
    Nume1 = Nume2++;
    std::cout << Nume1 << std::endl;
    Nume1 = 10;
    Nume1 = ++Nume2;
    std::cout << Nume1 << std::endl;

}

