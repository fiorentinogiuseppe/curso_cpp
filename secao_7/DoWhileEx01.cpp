//
// Created by giuseppe on 13/04/2020.
//

#include <iostream>
#include <clocale>
#include <cstdlib>

int main(){
    setlocale(LC_ALL, "portuguese");
    int escolha = 0;

    do {
        std::cout << "******** Tickets cinema **********" << std::endl;
        std::cout << "1- Para meia entrada" << std::endl;
        std::cout << "2- Para Inteira entrada" << std::endl;
        std::cout << "3- Sair" << std::endl;

        std::cout << "Escolha sua opcao: " << std::endl;
        std::cin >> escolha;

        switch(escolha){
            case 1: std::cout << "Ticket Meia Entrada Comprada" << std::endl;
                break;
            case 2: std::cout << "Ticket Inteira Entrada Comprada" << std::endl;
                break;
            case 3: std::cout << "Saindo...." << std::endl;
                break;
            default:
                std::cout << "Opcao Invalida" << std::endl;
                std::cin.ignore();
        }
    }while(escolha != 3);

    return 0;
}
