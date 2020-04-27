//
// Created by giuseppefn on 27/04/2020.
//
#pragma once
#ifndef CPP_CONTA_H
#define CPP_CONTA_H

#include <iostream>
#include <string>

class Conta
{
private:
    std::string Banco;
    int Agencia;
    int NumConta;
    std::string Titular;
    double Saldo{ 0.0 };

public:
    bool Sacar(double Valor);
    void Depositar(double Valor);
    void Transferir(Conta &Destino, double Valor);
    double ConsultarSaldo();
    std::string GetBanco();
    int GetAgencia();
    int GetNumConta();
    std::string GetTitular();
    void SetBanco(std::string Banco);
    void SetAgencia(int Agencia);
    void SetTitular(std::string Titular);
    void SetNumConta(int NumConta);

    void GetEnderecoThis();
};

#endif //CPP_CONTA_H
