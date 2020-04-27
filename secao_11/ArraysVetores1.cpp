//
// Created by giuseppefn on 27/04/2020.
//

#include<iostream>
#include <string>

int main(){
    float Nota[5];
    float Media = 0;
    std::string NomeAluno;

    std::cout << "Digite o nome do aluno: ";
    std::cin >> NomeAluno;

    for(int i=0; i<5; i++){
        std::cout << "Digite a nota " << i << ": ";
        std::cin >> Nota[i];
        Media += Nota[i];
    }

    Media = Media/5;

    std::cout << "A media das notas do aluno foi: " << Media << "\n";

    return 0;
}
