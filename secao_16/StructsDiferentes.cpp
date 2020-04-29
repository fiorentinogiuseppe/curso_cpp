#include <iostream>

struct StructData{
    static int contador;
    int id;
    int Dia{};
    int Mes{};
    int Ano{};
    StructData(){
        id = contador++;
        std::cout << "Construtor Data(" << id << ") executado" << std::endl;
    }
    ~StructData(){
        std::cout << "DesConstrutor ~Data(" << id << ") executado" << std::endl;
    }
};

class ClassData{
public:
    int Dia;
    int Mes;
    int Ano;
public:
    ClassData(): Dia(22), Mes(07), Ano(2013){}
};

int StructData::contador = 1;

int main(){
    {
        StructData AgendaStruct;
        {
            StructData AgendaStruct1;
            // Agora esta na heap e nao sera removido automaticamente como as outras que estao na stack
            auto *AgendaStruct3 = new StructData;
            // Agora remove da heap chamando o destrutor da estrutura
            delete(AgendaStruct3);
        }
        StructData AgendaStru4;
        return 0;

    }
}
