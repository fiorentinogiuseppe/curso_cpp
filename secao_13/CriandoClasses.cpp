//
// Created by giuseppe on 15/04/2020.
//
#include<iostream>

class Casa{
private:
    int NumQuartos;
    float Tamanho;
    bool bTemSuite;

public:
    void setTamanho(float tam);
    void setbTemSuite(bool tem);
    void setNumQuartos(int num);
    float getTamanho() const;
    bool getbTemSuite() const;
    int getNumQuartos() const;
};

int main(){
    // Limitado a um determinado escopo
    Casa CasaDePraia{};
    CasaDePraia.setTamanho(1000.0);
    CasaDePraia.setbTemSuite(false);
    CasaDePraia.setNumQuartos(2);
    std::cout << "\nTem suite? " << (CasaDePraia.getbTemSuite() ? "Sim" : "Nao")  << std::endl;
    std::cout << "\nNumero de quartos:  " << CasaDePraia.getNumQuartos() << std::endl;
    std::cout << "\nTamanho da casa: " << CasaDePraia.getTamanho() << std::endl;

    return 0;
}


void Casa::setTamanho(float tam) {
    Tamanho = tam;
}

void Casa::setbTemSuite(bool tem) {
    bTemSuite = tem;
}

void Casa::setNumQuartos(int num) {
    NumQuartos = num;
}

float Casa::getTamanho() const {
    return Tamanho;
}

bool Casa::getbTemSuite() const {
    return bTemSuite;
}

int Casa::getNumQuartos() const {
    return NumQuartos;
}
