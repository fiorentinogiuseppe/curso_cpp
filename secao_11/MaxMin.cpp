//
// Created by giuseppefn on 27/04/2020.
//

#include <iostream>
#include <locale>

int main(){
    setlocale(LC_ALL, "portuguese");
    int Array[20] {0};
    int LenArray;


    std::cout << "Entre com o tamanho do array [Valor máximo 20]: " ;
    std::cin >> LenArray;

    for(int i =0; i < LenArray; i++){
        std::cout << "Digite o numero " << i+1 << " : ";
        std::cin >> Array[i];
    }

    int max = Array[0];
    int min = Array[0];

    for(int i =0; i < LenArray; i++){
        if (Array[i] > max) max = Array[i];
        else min = Array[i] ;
    }

    std::cout << "Valor máximo: " << max << std::endl;
    std::cout << "Valor minimo: " << min << std::endl;



    return 0;
}