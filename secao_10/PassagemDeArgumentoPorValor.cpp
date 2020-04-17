//
// Created by giuseppe on 17/04/2020.
//

#include<iostream>

void TrocaNumeros(int Num1, int Num2);

int main (){
    setlocale(LC_ALL, "portuguese");
    int Num1, Num2;

    std::cout << "Digite primeiro numero: ";
    std::cin >> Num1;
    std::cout << "Digite segundo numero: ";
    std::cin >> Num2;

    std::cout << "Valores antes da troca: " << Num1 << " e " << Num2 << std::endl;
    TrocaNumeros(Num1, Num2);
    std::cout << "Valores antes da troca: " << Num1 << " e " << Num2 << std::endl;


    return 0;
}

void TrocaNumeros(int Num1, int Num2){
    int Temp = Num1;
    Num1=Num2;
    Num2=Temp;

}