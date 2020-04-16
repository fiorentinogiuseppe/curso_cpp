//
// Created by giuseppe on 16/04/2020.
//
#include "FuncoesMenu.h"
#include <clocale>
#include<iostream>

void ExibirMenu(){
    setlocale(LC_ALL, "portuguese");
    do // as instruções abaixo serão executadas pelo menos uma vez!
    {
        std::cout << "****Tickets Cinema****" << std::endl;
        std::cout << "\n1 - Para Meia Entrada\n";
        std::cout << "\n2 - Para Inteira\n";
        std::cout << "\n3 - Sair";

    } while (ProcessarEscolha(RetornarEscolha()) != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha(){
    int escolha = 0;
    std::cout << "\nEscolha sua opção: ";
    std::cin >> escolha;
    ProcessarEscolha(escolha);
}

int ProcessarEscolha(int TipoEscolha){
    switch (TipoEscolha)
    {
        case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
            break;
        case 2: std::cout << "\nTicket Inteira Comprado\n";
            break;
        case 3: std::cout << "\nSaindo Menu Tickets...\n";
            break;
        default: std::cout << "\nOpção Inválida!!!\n";
    }
    return TipoEscolha;
}