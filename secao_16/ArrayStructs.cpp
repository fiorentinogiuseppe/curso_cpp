//
// Created by giuseppefn on 29/04/2020.
//

#include <iostream>

struct Livro{
    int ID{};
    std::string Titulo;
    std::string Autor;
    std::string Editora;

};

int main(){
    struct Livro livro[5];

    for(auto & i : livro) {
        std::cout << "***** CADASTRO DE LIVRO *****" << std::endl;
        std::cout << "Digite ID do livro: ";
        std::cin >> i.ID;
        std::cin.ignore();

        std::cout << "Digite ID do Titulo: ";
        std::getline(std::cin, i.Titulo);
        std::cout << "Digite ID do Autor: ";
        std::getline(std::cin, i.Autor);
        std::cout << "Digite ID do Editora: ";
        std::getline(std::cin, i.Editora);
    }

    for(auto i : livro){
        std::cout << " ---------- SHOW ----------" << std::endl;
        std::cout << "ID: " << i.ID << std::endl;
        std::cout << "Titulo: " << i.Titulo << std::endl;
        std::cout << "Autor: " << i.Autor << std::endl;
        std::cout << "Editora: " << i.Editora << std::endl;
    }

    return 0;
}