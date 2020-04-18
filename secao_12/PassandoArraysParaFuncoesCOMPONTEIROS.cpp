//
// Created by giuseppe on 17/04/2020.
//

#include <iostream>


void MostrarVetor(int Array[], int TamVetor);
void AlterarVetor(int Array[], int TamVetor);

int main()
{
    int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
    int TamanhoVetor = sizeof(Vetor) / sizeof(int);

    std::cout << "\nTamanho Vetor: " << TamanhoVetor;

    std::cout << "\nVetor ORIGINAL";

    MostrarVetor(&Vetor[0], TamanhoVetor);
    AlterarVetor(&Vetor[0], TamanhoVetor);

    std::cout << "\nVetor ALTERADO?" ;
    MostrarVetor(&Vetor[0], TamanhoVetor);

    return 0;
}

void MostrarVetor(int *Ptr_Array, int TamVetor)
{
    for (int i = 0; i < TamVetor; i++)
    {
        std::cout << "- " << Ptr_Array[i] << " -";
    }
    std::cout << "\n\n";
}

void AlterarVetor(int *Ptr_Array, int TamVetor)
{
    for (int i = 0; i < TamVetor; i++)
    {
        Ptr_Array[i] = Ptr_Array[i] * 2;
    }
}