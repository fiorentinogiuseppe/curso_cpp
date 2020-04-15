//
// Created by giuseppe on 15/04/2020.
//

#include "Professor.h"

void Professor::EfetuarChamada() {
    std::cout << "Chamada feita \n" << std::endl;
}

void Professor::EntregarPauta() {
    std::cout << "Pauta entrege \n" << std::endl;
}

std::string Professor::getDepartamento() {
    return Departamento;
}

void Professor::setDepartamento(std::string NovoDepartamento) {
    Departamento = NovoDepartamento;
}

void Professor::MostrarDados() {
    Pessoa::MostrarDados();
    std::cout << "Departamento: " << getDepartamento() << std::endl;
}
