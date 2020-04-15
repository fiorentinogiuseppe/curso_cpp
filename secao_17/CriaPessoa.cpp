//
// Created by giuseppe on 15/04/2020.
//

#include <iostream>
#include "Professor.h"
#include "Bibliotecario.h"
#include "Aluno.h"

// Na classe por padrao os metodos sao privados
// Na estrutuda por padrao é publica

int main(){
    Professor Marcos{"Pacheco", 12345, 6789, "Udemy"};
    Aluno Luke{"Skaywaker", 88888, 99999, "Jedi"};
    Bibliotecario ObiWan{"Kenobi", 1111,22222};

    Marcos.MostrarDados();
    Luke.MostrarDados();
    ObiWan.MostrarDados();

    return 0;
}


