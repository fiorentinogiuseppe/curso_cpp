# Entendendo as Regiões da RAM (Stack e Heap) para entender Orientação à Objetos
* O sistema operacional ao carregar um programa na memória disponibiliza ao programa um espaço de
 endereçamento. Esse espaço é a memória disponível para aquele programa.
## Estrutura memoria RAM para programas

* É bom lembrar que esta divisão que coloquei acima na primeira figura não é de toda a memória RAM
* o que é dividido desta forma é o espaço de endereçamento fornecido ao seu programa quando ele executa., As vezes um programa é dividido em vários processos e então cada processo executado terá este espaço de endereçamento.

|------------------------------|<br/>
|+++++ HEAP ++++|<br/>
|------------------------------|<br/>
|------------------------------|<br/>
|+++++ Stack ++++|<br/>
|------------------------------|<br/>
|------------------------------|<br/>
|  Codigo do programa  |<br/>
|------------------------------|<br/>

### Codigo do programa
* Contem todo o codigo compilado e linkeditado do programa
* Nele existe os seguintes segmentos
    * .text
        * Que é o segmento de código. É a área da memória que contém o código executável(binário) de seu programa.
        Geralmente é somente leitura para evitar o riscos de ataques como buffer overflow, sobreposição de memória etc.
        E não contém variáveis ​​de programa como variável local, variáveis ​​globais etc. Contém apenas  no geral o código executável do programa que está sendo executado.
    
    * .bss
        *   Este segmento também é conhecido como bss .Esta é a parte da memória que contém:Variáveis ​​globais
        não inicializadas(incluindo variáveis ​​de ponteiro), Variáveis ​​globais constantes não inicializadas .
        Variáveis ​​estáticas locais não inicializadas. Qualquer variável local global ou estática que não seja
        inicializada será armazenada no segmento de dados não inicializado(bss).
        * Se você declarar uma variável global e a inicializar como 0 ou NULL ainda assim, ela será direcionada
        para o segmento de dados não inicializado ou bss.
    * .data
        *  Este segmento armazena:Variáveis ​​globais inicializadas(incluindo variáveis ​​de ponteiro),
        Variáveis ​​globais constantes  inicializadas .Variáveis ​​estáticas locais inicializadas.
        O tamanho desse segmento é determinado pelo tamanho dos valores no código-fonte do programa e não é alterado no tempo de execução.

###Stack
* Utiliza a estrutura de dados stack (LIFO)
* Região de memória especial de 1MB do computador que armazena variáveis temporárias
criadas para cada função e também armazena as chamadas de cada função, além do retorno de funções.
* Quando o código sai de uma função todas as variáveis colocadas na pilha por essa função são deletadas e essa região fica
disponivel
* Quando uma função é chamada um bloco de memória (stackframe) é empilhada no topo da pilha
* O escopo da variável é até o fim da função que a tem
* a função pode ser a principal ou definida pelo usuário

### Heap
* Toda memória disponível em seu computador
* Você contra alocação e desalocação dos objetos, pois não são destruídas automaticamente
* Este segmento é para oferecer suporte à alocação dinâmica de memória.
* O heap é o segmento de memória que não está definido para um tamanho constante antes da compilação e pode ser controlado dinamicamente pelo programador.
* Usamos a memória do heap quando não sabemos quanto espaço uma estrutura de dados ocupará em nosso programa,
quando precisamos alocar mais memória do que a disponível na pilha ou quando precisamos criar variáveis ​​que durem no
 tempo de duração da nossa aplicação.
 
 Para simplificar consideramos apenas stack e heap e neste caso a stack conterá bss e data segment, pois isso as variáveis ponteiros estarão sempre na stack. Porém as variáveis que o ponteiro aponta estarão ou na stack ou quando forem alocadas dinamicamente estão na Heap
 
 ### O que ocorre quando o programa chamar/executar uma função?
 Quando você executa uma função em seu código é criado dentro da região stack  chamado STACK FRAME ou Quadro/Bloco de Pilha. É uma região que guarda as informações da função, incluindo variáveis para os parâmetros passados para a função, o endereço de retorno (para onde a instrução return aponta).  variáveis criadas dentro da função (variáveis locais). E é importante lembrar que se uma ponteiro é criado dentro de uma função ele irá pertencer a esta região de stack dentro da stack frame de sua função
 
 ### Objetos
 * Criação de objetos sem inicializá-los ele é criado na pilha, caso contrário criará na heap. Isso sendo característica de C++.
 * Utilizando ponteiros e new o objeto é criado na heap. Assim esse novo tipo não é um objeto e sim um ponteiro na stack para algo que está na heap.
