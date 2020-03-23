#include <iostream>

// A diretiva de pré-processador #include
// indica para incluir o arquivo de cabeçalho
// iostream


int main()
// funcao principal. Todo programa C++ começa
// com esta funcao principal main()
{   // chavas
    // { indica o inicio de um bloco
    // cout comando de saida de dados
    // neste caso esta solicitando para
    // colocar na saida padrao ( tela)
    // a frase especificada
    std::cout << "Ola, meu nome eh Giuseppe e tenho 23 anos" << std::endl;
    // endl indica para inserir um caracter de quebra de linha  ou \n na frase ("string")
    return 0;
    // retorna para o sistema operaciona zero
    // zero e o padrao para informar que tudo deu certo
    // assim se a funcao main der certo ela retorna 0
} // { indica o final de um bloco
