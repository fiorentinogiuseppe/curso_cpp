//
// Created by giuseppe on 06/04/2020.
//

#include <iostream>

int main(){
    // {} inicializacao uniforme
    // () iniciar variaveis com valores literais
    int NumeroInteiro { 12 };
    float NumeroReal { 34.5 };
    char Caractere { 'c' };

    std::string Texto {"Texto da String"};
    std::printf(" Valor Numero int = %d \n Valor Numero float = %.2f \n Valor Numero char = %c \n Texto %s",
            NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
    std::cout << "Texto da string: " << Texto << std::endl;
}
