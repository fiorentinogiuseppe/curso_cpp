# Funções Conceitos e Desenvolvimento

## Consolidando a Anatomia de uma função
* Funcao é um bloco de codigo que pode ser chamado duraten a execucao
* Fundamental para otimizar o uso de memoria
* Anatomia 

```
<tipo de retorno> nome_da_funcao(<declaracao de parametros>){
    instrucoes;

    return;
}

```

* tipo de retorno
    * É o tipo de variavel que a funcao vai retornar.
    * O padrao é o tipo int
* nome_da_funcao
    * Identificador da funcao. 
* declaracao de parametros
    * Tipo de variavel que serao passados para as funcoes
* return
    * Encerra a execução ou retorna algum tipo de dados
### Argumentos vs parametros
   * Argumentos
        * Enviados em uma funcao
   * Parametros
        * Parametros que receberao os argumentos das funcoes

## Consolidando protótipos de funções
* Declarado uma funcao antes de desenvolver seu escopo. Serve para indicar para a funcao main que a funcao
referente ao prototipo que foi declarado existe, mas o codigo esta em outro lugar, pois a execução é TOP-DOWN.
* Ideal é que a funcao main esteja no inicio apos o prototipos

```
Prototipo funcao a;
Prototipo funcao b;
Prototipo funcao c;

main()
{
    instrucoes
}

codigo funcao a;
codigo funcao b;
codigo funcao c;
```

## Conceito de Namespaces
* Para resolver problemas de conflitos de nomes, etc foram criados os espaços de nomes ou Namespaces.
*  Objetivo destas Namespaces é criar uma região que seja identificada de forma que você possa referenciar ela correr o risco de conflitos de nomes.
* Sintaxe

```
namespace nome{
    header

}

```

* Assim é possível chamar as funções sem conflito de nome. Basta usar NomeDaNameSpace::Funcao

## Cast - Conversão de Dados Explícita x Coerção - Conversão de dados Implícita
* Tipos de dados define
    * Tamanho de uma variavel na memoria
    * Como seu valor sera interpretado e utilizado
* Tamanho de um tipo pode variar dependendo da arquitetura da cpu

* Promoção de tipos
    * Converter um tipo de tamanho diferente menor em um tipo de maior tamanho
    * conversão implicita de dados feito pelo computador tambem eh chamdao de coerção
    * conversão explicita é o cast
        * (tipo) variavel
    * char < int < long < float < double

## Variável Global
* Uma variavel que seja acessivel a todas as funcoes do programa

## Variável Local e o Escopo de uma Variável
* Variavel fora de um bloco de codigo[funcoes, loops, condicionais], tudo que esta entre inicio e fim das chaves,  so existe enquanto esse bloco estiver executando. Quando o bloco chegar ao fim
a variavels era removida da memoria. Isto é o escopo de uma variavel. Variaveis locais tem escopo ligada ao bloco
do codigo.

## Variáveis Locais Estáticas (static)

## Argumentos padrão para funções