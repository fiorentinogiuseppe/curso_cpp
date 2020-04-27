//
// Created by giuseppefn on 27/04/2020.
//

#include <iostream>
#include <locale>
#include <iomanip>

int main(){
    setlocale(LC_ALL, "portuguese");
    float VelocidadesKMH[] {4.9f, 9.5f, 5.6f, 2.5f, 9.6f, 6.4f, 7.5f, 9.8f, 8.7f, 10.0f};
    float Media = 0;
    int LenVetor = sizeof(VelocidadesKMH)/sizeof(float);
    for(auto Velocidade : VelocidadesKMH){
        Media+=Velocidade;
    }
    Media = Media/(float) LenVetor;

    std::cout << "A média das notas é: " << std::fixed <<std::setprecision(2) <<Media << std::endl;

    return  0;
}