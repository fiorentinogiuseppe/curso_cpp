//
// Created by giuseppefn on 05/05/2020.
//

#include <iostream>
#include <ctime>


int main(){
    time_t HoraAtual = time(0);
    tm* MinhaHora = localtime(&HoraAtual);

    std::cout << "Hora: " << 1 + MinhaHora -> tm_hour << ":" << 1+ MinhaHora->tm_min << ":" <<  1+MinhaHora-> tm_sec << std::endl;
    std::cout << "Dia: " << MinhaHora ->tm_mday << std::endl;
    std::cout << "Mes: " << MinhaHora -> tm_mon << std::endl;
    std::cout << "Ano: " << 1900 + MinhaHora -> tm_year << std::endl;


    time_t Tempo = time(NULL);
    std::cout << ctime(&Tempo);

    return 0;
}