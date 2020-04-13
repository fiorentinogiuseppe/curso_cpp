//
// Created by giuseppe on 13/04/2020.
//
#include<iostream>

int main(){
    std::cout << "========== Manualmente ==========" << std::endl;
    std::cout << "0" << std::endl;
    std::cout << "1" << std::endl;
    std::cout << "2" << std::endl;
    std::cout << "3" << std::endl;
    std::cout << "4" << std::endl;
    std::cout << "5" << std::endl;
    std::cout << "6" << std::endl;
    std::cout << "7" << std::endl;
    std::cout << "8" << std::endl;
    std::cout << "9" << std::endl;
    std::cout << "10" << std::endl;

    std::cout << "========== Loop ==========" << std::endl;
    int Numero = 0;
    while(Numero <= 10){
        std::cout << Numero << std::endl;
        Numero++;
    }
    return 0;
}