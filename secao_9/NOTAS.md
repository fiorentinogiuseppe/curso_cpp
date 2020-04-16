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
