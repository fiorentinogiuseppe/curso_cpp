//
// Created by giuseppe on 16/04/2020.
//

#include<iostream>

int ContadorChamadas(){
    static int NumChamadasDaFuncao = 0;
    return ++NumChamadasDaFuncao;

}

int main(){
    for(int i = 0; i<5; i++){
        std::cout << ContadorChamadas() << std::endl;
    }
    return 0;
}