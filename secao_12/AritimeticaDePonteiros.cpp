//
// Created by giuseppe on 17/04/2020.
//

#include <iostream>

int main(){
    int Vetor [] ={1, 23, -78, 900, 234};
    int *ptr;

    //ptr = &Vetor[0];
    ptr = Vetor;
    for(int i = 0; i<5; i++){
        std::cout << "Vetor[" << i << "] Endereco: " << &Vetor[i] << " Valor: " << Vetor[i] << std::endl;
    }

    std::cout << "*** Enderecos com aritmetica de ponteiros ***" << std::endl;
    std::cout << "Valor contido em ptr: " << ptr << std::endl;
    std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
    std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
    std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
    std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";
    std::cout << "Valor contido em ptr: " << ptr << std::endl;

    ptr++;
    std::cout << "Valor Contido em ptr depois de ptr++: " << ptr << "\n";
    ptr = &Vetor[3];
    ptr--;
    std::cout << "Valor do Apontado por ptr: " << *ptr << "\n";

    return 0;
}
