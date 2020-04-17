# *Ponteiros: conceitos e prática
## Importantes conceitos: variáveis, endereços e memória - Parte 1
* Variaveis são criadas na memoria RAM de tamanho igual a quantidade de bytes necessários para 
 armazenar seu tipo e recebem um endereco de memoria alocado para esta variavel.
*  Operador & (e comercial)
    * Endereco de memoria de
    * Endereco de memoria da variavel na memoria RAM
    * Endereco do primeiro byte em que a variavel esta alocada
    * Variavel na memoria é formado
        * End primeiro byte + sizeof do tipo
        
## O que é uma variável ponteiro?
* É uma variavel
    * Tem endereço alocado 
    * Tem identificador
    * Tem tipo
    * Tem algo armazenado
* Variavel especial que armazena endereço de memoria RAM
* Declarando

```
 tipo* <nomeponteiro>;
```


## Armazenando com & e = endereços de outras variáveis dentro de variáveis ponteiro
* Declara ponteiro mas nao incicializa ele com nenhum valor e isso pode ser perigoso, pois pode ser inicializado
com valores quaisquer
* Assim deve-se usar caso n tenha inicialização o valor nullptr

## Resumindo
* &ptr 
    * Endereço em que o ponteiro esta carregado
* ptr
    * Valor que esta dentro da variavel ponteiro, que é um endereço de memória
* *ptr 
    * Representa o valor armazenado no endereço que o ponteiro está apontando

##  Consolidando Ponteiros Genéricos void*
* Tipo especial de ponteiro que pode apontar para qualquer tipo de dados.

```
    void * NomePonteiroGenerico;
``` 
* Pode apontar para qualquer tipo de dados.
* Porem não pode ser desrefeenciado diretamente em vez disso precisa converter antes de fazer isso.
* (char *) poteiro do tipo char ou capaz de apontar para um tipo char
* (int *) poteiro do tipo char ou capaz de apontar para um tipo int
* (float *) poteiro do tipo char ou capaz de apontar para um tipo float
* (double *) poteiro do tipo char ou capaz de apontar para um tipo double

## NOTA
* A posição do \* não importa.
* É um Erro clássico de tentar usar um ponteiro sem iniciar ele com algum endereço de memória.  
* Primeiro deve-se inicializar e so então modificar o valor.
* \* é  o operador de desreferenciamento. Ele indica O APONTADO POR, ou vá no endereço que está 
apontando e traga o valor contido na variável que começa com este endereço de memória. 
* Lembre que é preciso informar como o ponteiro void irá navegar na memória. Você faz isso com CAST para o tipo desejado. 
