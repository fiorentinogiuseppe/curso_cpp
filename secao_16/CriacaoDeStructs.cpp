//
// Created by giuseppefn on 29/04/2020.
//

#include <iostream>

struct Ponto3D{
    int X;
    int Y;
    int Z;
    void DesenharPonto3d(){
        std::cout << "X:" << X << " - Y:" << Y << " - Z:" << Z << std::endl;
    }
};



int main(){
    Ponto3D PontoC{};
    PontoC.X = 3;
    PontoC.Y = 4;
    PontoC.Z = 5;
    PontoC.DesenharPonto3d();

    return 0;
}