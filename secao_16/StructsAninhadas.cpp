//
// Created by giuseppefn on 04/05/2020.
//

#include <iostream>
#include <cstring>

struct Data{
    int Dia;
    int Mes;
    int Ano;
};

struct Endereco{
    std::string Rua;
    std::string Cidade;
    std::string Estado;
    std::string Pais;
};

struct Pessoa{
    std::string Nomae;
    Data DtNascimento;
    Endereco Endereco;
};

int main(){
    Pessoa Pessoa01;
    Pessoa01.Nomae = "Udemy";
    Pessoa01.DtNascimento.Dia = 26;
    Pessoa01.DtNascimento.Mes = 01;
    Pessoa01.DtNascimento.Ano = 1997;

    Pessoa01.Endereco.Rua = "Sem numero";
    Pessoa01.Endereco.Cidade = "Recife";
    Pessoa01.Endereco.Estado = "Pernambuco";
    Pessoa01.Endereco.Pais = "Brasil";
    return 0;
}

