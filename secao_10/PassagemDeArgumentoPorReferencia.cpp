//
// Created by giuseppe on 17/04/2020.
//

#include<iostream>

void TrocaNumeros(int &Num1, int &Num2);

int main (){
    setlocale(LC_ALL, "portuguese");
    int Numero1, Numero2;

    std::cout << "Digite primeiro numero: ";
    std::cin >> Numero1;
    std::cout << "Digite segundo numero: ";
    std::cin >> Numero2;

    std::cout << "Valores antes da troca: " << Numero1 << " e " << Numero2 << std::endl;
    TrocaNumeros(Numero1, Numero2);
    std::cout << "Valores antes da troca: " << Numero1 << " e " << Numero2 << std::endl;


    return 0;
}

void TrocaNumeros(int &Num1,  int &Num2){
    int Temp = Num1;
    Num1=Num2;
    Num2=Temp;

}