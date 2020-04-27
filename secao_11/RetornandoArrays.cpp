//
// Created by giuseppefn on 27/04/2020.
//

#include <iostream>

void DuplicaVetor(int *Array, int Tam);
int *InverteVetor(const int *Array, int Tam);
void MostraVetor(int *Array, int Tam);

int main(){
    int Numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int Tam = sizeof(Numeros)/sizeof(int);
    MostraVetor(Numeros, Tam);
    DuplicaVetor(Numeros, Tam);
    MostraVetor(Numeros, Tam);
    MostraVetor(InverteVetor(Numeros, Tam), Tam);
    return 0;
}

void DuplicaVetor(int *Array, int Tam){
    for(int i=0; i < Tam; i++){
        Array[i] = 2*Array[i];
    }
}
int *InverteVetor(const int *Array, int Tam){
    static int ArrayInvertido[10];
    for(int i = Tam-1, j=0; i >= 0; i--, j++){
        ArrayInvertido[j] = Array[i];
    }
    return ArrayInvertido;
}
void MostraVetor(int *Array, int Tam){
    std::cout << "[ ";
    for(int i = 0; i < Tam; i++){
        std::cout << Array[i] << "  ";
    }
    std::cout << " ]" << std::endl;
}