//
// Created by giuseppe on 15/04/2020.
//


#include <iostream>
class Base{
    // Declarar as classes de acordo com o modo primeiro vindo as publics depois protegidas e por fim privadas

public:
    void SolicitarNumeros(){
        std::cout << "Num1: ";
        std::cin >> Num1;
        std::cout << "Num2: ";
        std::cin >> Num2;
        MostrarResultado(Num1, Num2);
    }

private:
    float Num1, Num2;
    float Soma(int Num1, int Num2){
        return Num1+Num2;
    }
    void MostrarResultado(int Num1, int Num2){
        std::cout << Num1 << " + " << Num2 << " = " << Soma(Num1,Num2) << std::endl;
    }
};

class Derivada : public Base{};


int main(){
    Derivada obj;
    obj.SolicitarNumeros();

    return 0;
}