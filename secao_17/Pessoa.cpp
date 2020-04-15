//
// Created by giuseppe on 15/04/2020.
//

#include "Pessoa.h"

void Pessoa::AcessarSistema() {
    std::cout <<"********** Acesso ao sistema concedido **********" << std::endl;
}

std::string Pessoa::GetNome() {
    return this->Nome;
}

int Pessoa::GetMatricula() {
    return this->Matricula;
}

int Pessoa::GetCPF() {
    return this->CPF;
}

void Pessoa::SetNome(std::string Nome) {
    this->Nome = Nome;
}

void Pessoa::SetCPF(int CPF) {
    this->CPF = CPF;
}

void Pessoa::SetMatricula(int Matricula) {
    this->Matricula = Matricula;
}

void Pessoa::MostrarDados() {
    std::cout << "********** DADOS **********" << std::endl;
    std::cout << "Nome: " << GetNome() << std::endl;
    std::cout << "CPF: " << GetCPF() << std::endl;
    std::cout << "Matricula: " << GetMatricula() << std::endl;
}

