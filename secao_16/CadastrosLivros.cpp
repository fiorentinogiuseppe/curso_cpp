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

void menu(Livro &Tmplivro){
    std::cout << "***** CADASTRO DE LIVRO *****" << std::endl;
    std::cout << "Digite ID do livro: ";
    std::cin >> Tmplivro.ID;
    std::cin.ignore();

    std::cout << "Digite ID do Titulo: ";
    std::getline(std::cin, Tmplivro.Titulo);
    std::cout << "Digite ID do Autor: ";
    std::getline(std::cin, Tmplivro.Autor);
    std::cout << "Digite ID do Editora: ";
    std::getline(std::cin, Tmplivro.Editora);

    std::cout << " ---------- SHOW ----------" << std::endl;
    std::cout << "ID: " << Tmplivro.ID << std::endl;
    std::cout << "Titulo: " << Tmplivro.Titulo  << std::endl;
    std::cout << "Autor: " << Tmplivro.Autor  << std::endl;
    std::cout << "Editora: " << Tmplivro.Editora  << std::endl;
}

int main(){
    Livro livro;
    menu(livro);

    return 0;
}