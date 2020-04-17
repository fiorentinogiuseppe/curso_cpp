//
// Created by giuseppe on 17/04/2020.
//

#include <iostream>

int main(){
    int Numero{4890};
    char Letra{'E'};
    void *ptrG;

    ptrG = &Letra;

    std::cout << ptrG << std::endl;
    std::cout << *(char*) ptrG << std::endl;
    std::cout << &ptrG << std::endl;

    return 0;
}