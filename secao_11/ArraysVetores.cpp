//
// Created by giuseppefn on 27/04/2020.
//

#include<iostream>
#include <string>

int main(){
    float Nota1, Nota2, Nota3, Nota4, Nota5;
    float Media;
    std::string NomeAluno;

    std::cout << "Digite o nome do aluno: ";
    std::cin >> NomeAluno;

    std::cout << "Digite a primeira nota: ";
    std::cin >> Nota1;

    std::cout << "Digite a segunda nota: ";
    std::cin >> Nota2;

    std::cout << "Digite a terceira nota: ";
    std::cin >> Nota3;

    std::cout << "Digite a quarta nota: ";
    std::cin >> Nota4;

    std::cout << "Digite a quinta nota: ";
    std::cin >> Nota5;

    Media = (Nota5+Nota4+Nota3+Nota2+Nota1)/5;

    std::cout << "A media das notas do aluno foi: " << Media << "\n";

    return 0;
}
