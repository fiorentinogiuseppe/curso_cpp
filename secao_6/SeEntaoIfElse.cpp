//
// Created by giuseppe on 13/04/2020.
//

#include <iostream>
#include <string>

int main(void){
    bool bFezSol, bCarroPronto, bSalarioDepositado;
    bool bAcesso;

    std::string SenhaDeAcesso = "cmaismais";
    std::string SenhaDigitada;

    std::cout << "Digite a senha de acesso: ";
    std::cin >> SenhaDigitada;

    if(SenhaDeAcesso == SenhaDigitada){
        std::cout << "\nAcesso Permitido!" << "\n";
        bAcesso = true;
    }
    else{
        std::cout << "\nAcesso Nao Permitido!" << "\n";
        exit(0);
    }
    bFezSol  = false;
    bCarroPronto = false;
    bSalarioDepositado = false;
    if(bAcesso == true){
        if (bFezSol || bCarroPronto || bSalarioDepositado){
            std::cout << "Vai dar praia" << std::endl;
        }else if(! bSalarioDepositado){
            std::cout << "Nao vai dar praia, mas salario foi depositado" << std::endl;
        }
        else{
            std::cout << "Nao vai dar praia" << std::endl;
        }
    }

    return 0;
}