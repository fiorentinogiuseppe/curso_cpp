# std::cin >> recebendo dados do usuário via teclado.
* Colocar o valor digitado no stdin na variavel Numero01. 
*Recebe o dado e quebra a linha
# Operadores Aritimeticos
* \+ - Adição
* \- - Subtracao
* \* - Multiplicacao
* \/ - Divisao
* \% - Resto da divisao

#Precedência de Operadores
* Matematica
   * Operadores
     * raiz e radiciacoes
     * divisao e multiplicacao
     * adicao e subtracao
     * Na ordem da esquerda para direita
   * sinais de associação
     * Parenteses
     * Colchetes
     * Chaves
   * Sinais de associacao tem precedencia em relação aos operadores
* Programação
   * Nao existe [] e nem {}
   * Apenas utiliza ()
   * () aumenta a ordem de precedencia 
   * Os operadores possuem as mesmas precedencia da matematica
   * Sinais de associacao tem precedencia em relação aos operadores

# Debugger
## [GDB](https://www.ic.unicamp.br/~rafael/materiais/gdb.html)
   * Comandos de gdb
     * Compilando o programa
       * Compilar o programa com a opção -g e sem opções de otimização como -O3  
     * Iniciando o gdb
        * gdb meu_programa
     * Rodando o programa no gdb
        * run
        * Sem colocar um breakpoint, o programa irá rodar até o final.
        * Mas se tiver um segmentation fault no seu programa, você pode rodar sem breakpoint e descobrir qual linha teve problema.
     * Breakpoints 
        * Os breakpoints são lugares (linhas ou funções) onde você quer que o programa pare a execução e espere por um comando seu
        * Criando Breakpoints
           * Você pode colocar um breakpoint em uma função e a execução irá parar sempre quando a função for chamada
              * break main
           * Você também pode colocar breakpoints em linhas do seu código
              * break 10
           * Quando você tem vários arquivos (veremos isso no curso), você precisa especificar de qual arquivo você quer a linha. 
              * break exemplo.c:10
        * Apagando breakpoints
           * delete 3
           * Você também pode apagar todos os breakpoints com o comando
              * clear
     * Executando passo-a-passo
     https://www.ic.unicamp.br/~rafael/materiais/gdb.html
     * Imprimindo variáveis
     https://www.youtube.com/watch?time_continue=3&v=7j6YY3vULQE&feature=emb_title
   