//
// Created by giuseppe on 15/04/2020.
//

#ifndef CPP_PESSOA_H
#define CPP_PESSOA_H

#include <iostream>
#include <utility>

class Pessoa {
public:
    std::string Nome;
    int CPF;
    int Matricula;

    // Construtor sem parametros
    Pessoa() : Nome(""), CPF(0), Matricula(0){};
    // Construtor com parametros
    Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula): Nome(std::move(NovoNome)), CPF(NovoCPF), Matricula(NovaMatricula){};

    void AcessarSistema();
};


#endif //CPP_PESSOA_H
