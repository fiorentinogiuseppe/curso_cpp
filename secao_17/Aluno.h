//
// Created by giuseppe on 15/04/2020.
//

#ifndef CPP_ALUNO_H
#define CPP_ALUNO_H

#include <utility>

#include "Pessoa.h"

class Aluno : public Pessoa {
public:
    Aluno()= default;
    // Forma 1 de inicializar
    Aluno(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoCurso): Pessoa(std::move(NovoNome), NovoCPF, NovaMatricula), Curso(std::move(NovoCurso)){};

    // Outra forma de inicializar
    /*Aluno(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoCurso) {
        Nome = std::move(NovoNome);
        CPF = NovoCPF;
        Curso = std::move(NovoCurso);
    };*/
    void RealizarProva();
    void SetCurso(std::string NewCurso);
    std::string GetCurso();
    void MostrarDados();
private:
    std::string Curso;

};


#endif //CPP_ALUNO_H
