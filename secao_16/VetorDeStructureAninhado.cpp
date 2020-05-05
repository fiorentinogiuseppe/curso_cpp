//
// Created by giuseppefn on 05/05/2020.
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
    Data DtNascimento{};
    struct Endereco Endereco;
};

int main(){
    struct Pessoa Pessoa01[2];

    for(auto & i : Pessoa01){
        i.Nomae = "Udemy";
        i.DtNascimento.Dia = 26+1;
        i.DtNascimento.Mes = 01+1;
        i.DtNascimento.Ano = 1997+1;

        i.Endereco.Rua = "Sem numero";
        i.Endereco.Cidade = "Recife";
        i.Endereco.Estado = "Pernambuco";
        i.Endereco.Pais = "Brasil";
    }

    for(auto & i : Pessoa01){
        std::cout<< i.Nomae << std::endl;
        std::cout<< i.DtNascimento.Dia << std::endl;
        std::cout<< i.DtNascimento.Mes << std::endl;
        std::cout<< i.DtNascimento.Ano << std::endl;

        std::cout<< i.Endereco.Rua << std::endl;
        std::cout<< i.Endereco.Cidade << std::endl;
        std::cout<< i.Endereco.Estado << std::endl;
        std::cout<< i.Endereco.Pais << std::endl;
    }
    return 0;
}

