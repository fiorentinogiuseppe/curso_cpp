//
// Created by giuseppefn on 27/04/2020.
//

#include<iostream>
void MostrarVetor(int Array[], int i);

int main(){
    int Vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int LenVetor = sizeof(Vetor)/sizeof(int);
    MostrarVetor(Vetor, (int) LenVetor);
    return 0;
}

void MostrarVetor(int Array[], int LenVetor){
    for(int i=0; i< LenVetor; i++){
        std::cout << Array[i] << std::endl;
    }
}
