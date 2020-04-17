//
// Created by giuseppe on 17/04/2020.
//

#include <iostream>

int main(){
    setlocale(LC_ALL, "portuguese");

    int Numero{234};
    int* Iptr = &Numero;
    int* OutroPtr= Iptr;
    *Iptr = 1456;

    std::cout << "Valor de Numero: " << *Iptr << std::endl;
    std::cout << "Valor de Iptr: " << Iptr << std::endl;
    std::cout << "Endereço de Numero: " << &Numero << std::endl;
    std::cout << "Endereço de Iptr: " << &Iptr << std::endl;

    *OutroPtr += 200;
    std::cout << "Valor de OutroPtr: " << *OutroPtr << std::endl;




    return 0;
}