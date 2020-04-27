//
// Created by giuseppefn on 27/04/2020.
//

#include "Conta.h"

int main(){
    Conta ContaCliente01;
    Conta ContaCliente02;

    std::cout << "Endereco Memoria Objeto ContaClienmte01: " << &ContaCliente01 << std::endl;
    std::cout << "Endereco Memoria Objeto ContaClienmte02: " << &ContaCliente02 << std::endl;

    ContaCliente01.SetBanco("Bradesco");
    ContaCliente01.SetAgencia(1234);
    ContaCliente01.SetNumConta(9999);
    ContaCliente01.SetTitular("Fulano");
    ContaCliente01.Depositar(14690.0);
    ContaCliente01.Sacar(1500);


    ContaCliente02.SetBanco("BB");
    ContaCliente02.SetAgencia(5678);
    ContaCliente02.SetNumConta(66666);
    ContaCliente02.SetTitular("Beltrano");

    ContaCliente01.Transferir(ContaCliente02, 2000);
    ContaCliente02.Sacar(500);
    ContaCliente02.Sacar(5000);



    return 0;
}