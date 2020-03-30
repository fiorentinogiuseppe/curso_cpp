//
// Created by giuseppe on 30/03/2020.
//

#include <iostream>

void  sistema(const std::string& value){
    if(value == "PAUSE"){
        std::cout << "Press Enter..." << std::endl;
        std::cin.ignore();
    }
}

int main(){

    int NumVidas = 5; // indicacao de alocacao de memoria para uma variavel do tipo inteiro
    int Score = 1350; // indicacao de alocacao de memoria para uma variavel do tipo inteiro

    std::cout << "*****INICIO DO JOGO*******" << std::endl;
    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Tamanho da variavel pontuacao: " << sizeof(NumVidas) << "bytes" << std::endl;
    std::cout << "Endereco de NumVida na memoria: " << &NumVidas << std::endl; // cada local de memoria tem um endereço que tera os valores da variavel
    std::cout << "Score:" << Score  << std::endl;
    std::cout << "Tamanho da variavel pontuacao: " << sizeof(Score) << "bytes" << std::endl;
    std::cout << "Endereco de Score na memoria: " << &Score << std::endl;
    std::cout << "**************************" << std::endl;

    std::cout << "*****Durante DO JOGO******" << std::endl;
    Score += 150;
    NumVidas -= 1;
    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Score:" << Score  << std::endl;
    std::cout << "**************************" << std::endl;

    sistema("PAUSE");

    return 0;
}