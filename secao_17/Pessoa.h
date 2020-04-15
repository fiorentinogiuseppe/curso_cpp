//
// Created by giuseppe on 15/04/2020.
//

#ifndef CPP_PESSOA_H
#define CPP_PESSOA_H

#include <iostream>
#include <utility>

class Pessoa {
public:
    // Construtor sem parametros
    Pessoa() : Nome(""), CPF(0), Matricula(0){};
    // Construtor com parametros
    Pessoa(std::string Nome, int CPF, int Matricula): Nome(std::move(Nome)), CPF(CPF), Matricula(Matricula){};

    void AcessarSistema();
    std::string GetNome();
    int GetMatricula();
    int GetCPF();
    void SetNome(std::string Nome);
    void SetCPF(int CPF);
    void SetMatricula(int Matricula);
    void MostrarDados();

private:
    std::string Nome;
    int CPF;
    int Matricula;

};


#endif //CPP_PESSOA_H
