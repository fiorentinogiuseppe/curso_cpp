//
// Created by giuseppefn on 27/04/2020.
//

#include <iostream>
#include <locale>
#include <iomanip>

int main(){
    setlocale(LC_ALL, "portuguese");
    float VelocidadesKMH[] {70.9f, 89.5f, 65.6, 102.5f, 123.6f, 63.4f, 74.5f, 99.5f, 68.7f};
    float Media = 0;
    int LenVetor = sizeof(VelocidadesKMH)/sizeof(float);
    for(auto Velocidade : VelocidadesKMH){
        Media+=Velocidade;
    }
    Media = Media/(float) LenVetor;

    std::cout << "A média das velocidades é: " << std::fixed <<std::setprecision(2) <<Media << " km/h" << std::endl;

    return  0;
}