//
// Created by giuseppe on 15/04/2020.
//

#include "Aluno.h"

void Aluno::RealizarProva() {
    std::cout << "Prova realizada" << std::endl;
}

void Aluno::SetCurso(std::string NewCurso) {
    Curso = NewCurso;
}

std::string Aluno::GetCurso() {
    return Curso;
}

void Aluno::MostrarDados() {
    Pessoa::MostrarDados();
    std::cout << "Curos: " << GetCurso() << std::endl;
}
