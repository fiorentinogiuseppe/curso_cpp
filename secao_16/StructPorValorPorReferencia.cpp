//
// Created by giuseppefn on 29/04/2020.
//

#include <iostream>
#include <iomanip>

struct Aluno{
    long int Matricula;
    std::string Nome;
    std::string Curso;
    int Semestre;
    double Mensalidade;
} ;

void MostrarDados(struct Aluno Dado);
void MostrarDados(struct Aluno *Dado);
void AlterarDados(struct Aluno &Dado);
void AlterarDados(struct Aluno *Dado);

int main(){
    struct Aluno Aluno01 = {11111111, "Fulano", "TI", 4 ,990.50};
    struct Aluno* Aluno02 = new Aluno;
    std::cout << "ANTES DE MODIFICAR OS DADOS" << std::endl;
    MostrarDados(Aluno01); // Enviando por cópia
    AlterarDados(Aluno01);
    std::cout << "DEPOIS DE MODIFICAR OS DADOS" << std::endl;
    MostrarDados(Aluno01);

    AlterarDados(Aluno02);
    MostrarDados(Aluno02); // Enviando por cópia



    return 0;
}

void MostrarDados(struct Aluno Dado){
    std::cout << "********* Dados do aluno *********\n";
    std::cout << "\t Nome:" << Dado.Nome << std::endl;
    std::cout << "\t Curso:" <<  Dado.Curso << std::endl;
    std::cout << "\t Semestre:" <<  Dado.Semestre << std::endl;
    std::cout << "\t Matricula:" <<  Dado.Matricula << std::endl;
    std::cout << "\t Mensalidade:  R$" << std::fixed << std::setprecision(2) << Dado.Mensalidade << std::endl;
    std::cout << "*************************************\n\n";
}

void MostrarDados(struct Aluno *Dado){
    std::cout << "********* Dados do aluno *********\n";
    std::cout << "\t Nome:" << Dado->Nome << std::endl;
    std::cout << "\t Curso:" <<  Dado->Curso << std::endl;
    std::cout << "\t Semestre:" <<  Dado->Semestre << std::endl;
    std::cout << "\t Matricula:" <<  Dado->Matricula << std::endl;
    std::cout << "\t Mensalidade:  R$" << std::fixed << std::setprecision(2) << Dado->Mensalidade << std::endl;
    std::cout << "*************************************\n\n";
}

void AlterarDados(struct Aluno &Dado){
    Dado.Nome = "Beltrano";
    Dado.Curso = "Engenharia";
    Dado.Semestre = 1;
    Dado.Matricula = 2222;
    Dado.Mensalidade = 870.99;
}

void AlterarDados(struct Aluno *Dado){
    Dado->Nome = "CICRANO";
    Dado->Curso = "Engenharia";
    Dado->Semestre = 1;
    Dado->Matricula = 2222;
    Dado->Mensalidade = 870.99;
}