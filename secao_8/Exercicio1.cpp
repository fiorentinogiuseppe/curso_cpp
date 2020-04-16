//
// Created by giuseppe on 16/04/2020.
//

#include <iostream>

float soma(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);

int main(){
    float Num1, Num2;

    std::cout << "Digite primeiro numero";
    std::cin >> Num1;
    std::cout << "Digite segundo numero";
    std::cin >> Num2;

    std::cout << Num1 << " + " << Num2 << " = " << soma(Num1, Num2) << std::endl;
    std::cout << Num1 << " - " << Num2 << " = " << subtracao(Num1, Num2) << std::endl;
    std::cout << Num1 << " * " << Num2 << " = " << multiplicacao(Num1, Num2) << std::endl;
    std::cout << Num1 << " / " << Num2 << " = " << divisao(Num1, Num2) << std::endl;
    return 0;
}

float soma(float num1, float num2){
    return num1+num2;
};
float subtracao(float num1, float num2){
    return num1-num2;
};
float multiplicacao(float num1, float num2){
    return num1*num2;
};
float divisao(float num1, float num2){
    return num1/num2;
};