#include <iostream>

struct StructData{
    int Dia;
    int Mes;
    int Ano;
};

class ClassData{
public:
    int Dia;
    int Mes;
    int Ano;
public:
    ClassData(): Dia(22), Mes(07), Ano(2013){}
};

int main(){
    StructData AgendaStruct{22, 07, 2013};
    ClassData AgendaClasse;

    std::cout << AgendaStruct.Dia << "/" << AgendaStruct.Mes << "/" << AgendaStruct.Ano << std::endl;
    std::cout << AgendaStruct.Dia << "/" << AgendaClasse.Mes << "/" << AgendaClasse.Ano << std::endl;

    return 0;
}