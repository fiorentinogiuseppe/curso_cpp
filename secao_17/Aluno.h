//
// Created by giuseppe on 15/04/2020.
//

#ifndef CPP_ALUNO_H
#define CPP_ALUNO_H

#include <utility>

#include "Pessoa.h"

class Aluno : public Pessoa {
public:
    std::string Curso;
    Aluno()= default;
    Aluno(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoCurso): Pessoa(std::move(NovoNome), NovoCPF, NovaMatricula), Curso(std::move(NovoCurso)){};
    void RealizarProva();
};


#endif //CPP_ALUNO_H
