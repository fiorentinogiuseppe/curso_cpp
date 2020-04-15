//
// Created by giuseppe on 15/04/2020.
//

#ifndef CPP_BIBLIOTECARIO_H
#define CPP_BIBLIOTECARIO_H
#include <utility>

#include "Pessoa.h"

class Bibliotecario : public Pessoa {
public:
    Bibliotecario()= default;
    Bibliotecario(std::string NovoNome, int NovoCPF, int NovaMatricula): Pessoa(std::move(NovoNome), NovoCPF, NovaMatricula) {};

    static void CadastrarLivros();
};


#endif //CPP_BIBLIOTECARIO_H
