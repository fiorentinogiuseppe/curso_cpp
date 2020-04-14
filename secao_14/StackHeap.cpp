//
// Created by giuseppe on 14/04/2020.
//

#include<iostream>

// Declaracao de funcoes
void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();

// Variaveis Globais
int VarGlobal{10};

// Main
int main(void){

    int VarMain{00};

    Funcao01();


    return 0;
}

// Definicoes das funcoes
void Funcao01(){
    int Var01{01};
    static int VarEstatica{20};

    std::cout << "\n Chamada Funcao01\n";
    std::cout << "\n Endereco Var01: " << &Var01 << "\n";

    VarEstatica++;
    std::cout << "Valor VarEstatica: " << VarEstatica << "\n";

    Funcao02();
}


void Funcao02(){
    int Var02{02};

    std::cout << "\n Chamada Funcao02\n";
    std::cout << "\n Endereco Var02: " << &Var02 << "\n";

    Funcao03();
}


void Funcao03(){
    int Var03{03};

    std::cout << "\n Chamada Funcao03\n";
    std::cout << "\n Endereco Var03: " << &Var03 << "\n";

    Funcao04();
}

void Funcao04(){
    int Var04{04};

    std::cout << "\n Chamada Funcao04\n";
    std::cout << "\n Endereco Var04: " << &Var04 << "\n";
}
