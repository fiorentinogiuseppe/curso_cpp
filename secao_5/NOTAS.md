# std::cin >> recebendo dados do usuário via teclado.
* Colocar o valor digitado no stdin na variavel Numero01. 
*Recebe o dado e quebra a linha
# Operadores Aritimeticos
* \+ - Adição
* \- - Subtracao
* \* - Multiplicacao
* \/ - Divisao
* \% - Resto da divisao
  * The modulus operator % cannot apply to float or double. It's meant to get the remainder when integer type x is divided by y. It does not have any meaning when you use it with float or double.

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
        * A ideia do debbugger (ou depurador, em português) é permitir que você execute o programa passo-a-passo, 
        acompanhando sua execução, enquanto também consegue ver ou alterar o valor de variáveis, chamar funções, etc.
        * Quando o gdb parar em um breakpoint, você poderá falar para seguir com a execução usando o comando:
          * continue
        *Se você quiser executar um comando por vez, você tem duas opções:
            * step
               * entra em qualquer função que seja chamada nessa linha.
            * next
               * vai sempre para a próxima linha do arquivo, 
     * Imprimindo variáveis
       * Você pode imprimir o valor de qualquer variável x usando
          * print x
       * Você também pode imprimir campos de struct, posições de vetores, etc.
       * A variável ficará sempre visível e você pode acompanhar as alterações no valor dela.
         * display x
       * Para remover algo que está com display, faça
         * undisplay x

# Operadores relacionais e de Igualdade == > < >= <= !=
* ==   - igualdade
* \>   - maior
* \>=  - maior ou igual
* \<   - menor
* \<=  - menor ou igual
* \>!= - diferente de

# Conceito de Lógica, Algoritmo, Pseudocódigo e   Processamento de Dados
## Logica
* Organizacao do pensamento humano
* Ato de pensar
* Encadeamento de alguma coisa que obedece a certas regras e convencoes
## Algoritmo
* Uma sequência finita de passos não ambíguos que leva a execução de uma tarefa
* conjunto de dados de entrada em um conjunto de dados de saída por meio de instruções computacionais,
ou seja processamento dos dados

##Pseudo codigo
* Forma genérica de escrever um algoritmo, utilizando uma linguagem simples sem necessidade de conhecer a sintaxe de nenhuma
linguagem de programaçao
# Operadores Lógicos AND - E - &&, OR- OU - || e NOT  - NÃO - !
## Operador logico And - E - &&
* Para ser true todas as condições tem que ser satisfeita
## Operador logico OR- OU - ||
* Para ser true apenas uma das condições tem que ser satisfeita
## Operador logico NOT- NÃO - !
* O oposto da expressao logica avaliada

# std::printf( ) utilizando especificadores %c, %s, %d, %f e %l PARTE 1
## Especificadores de formato
* Especifica o tipo da variavel que sera utilizada na funcao printf
* %d inteiro
* %f float
* %lf double
* %c char
* %s string
* %% é o %
## Caractere de escape
* \a
* \b
* \f
* \n
* \r

...

# Operador Incremento ++ e Decremento -- Pré-fixados e Pós-Fixados
* ++ ou -- indica que será adicionado um ou subtraído um do valor da variável
  * Se isso aparecer sozinho no código fora de qualquer sentença de cout ou atribuição, etc isso não irá importar se é pré ou pós fixado.
* Existem casos que o compilador precisará saber se é para incrementar antes ou depois a variável.
  * pós-fixada 
    * Primeiro atribui e depois incrementa
  * pre-fixado
    * Primeiro incrementa e depois atribui
* :warning: Em programação existem comandos que efetivamente mudam os valores das variáveis na memória e existem outros comandos que apenas usam este valor da variável sem mudar nada na memória.
