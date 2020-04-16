//
// Created by giuseppe on 16/04/2020.
//
#include <iostream>

bool isPar(int n1);

int main(int argc, char** argv){
    int n1;
    std::cout << "Digite um Numero: ";
    std::cin >> n1;
    std::cout << "Numero " << n1 << " é " << (isPar(n1) ? "Par" : "Impar") << std::endl;
    return 0;
}

bool isPar(int n1){
    return n1 % 2 == 0;
}