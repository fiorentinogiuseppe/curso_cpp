//
// Created by giuseppe on 15/04/2020.
//

#ifndef CPP_PROFESSOR_H
#define CPP_PROFESSOR_H
#include <utility>

#include "Pessoa.h"

class Professor : public Pessoa {
public:
    // Chamamos o contrutor da superclasse e iniciamos tb o construtor da classe atual
    Professor()= default;
    Professor(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoDepartamento): Pessoa(NovoNome, NovoCPF, NovaMatricula), Departamento(std::move(NovoDepartamento)){};
    void EfetuarChamada();
    void EntregarPauta();
    std::string getDepartamento();
    void setDepartamento(std::string NovoDepartamento);
    void MostrarDados();
private:
    std::string Departamento;
};


#endif //CPP_PROFESSOR_H
