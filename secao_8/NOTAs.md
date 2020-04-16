# Funções Conceitos e Desenvolvimento

## Consolidando a Anatomia de uma função
* Função é um bloco de código que pode ser chamado durante a execução
* Fundamental para otimizar o uso de memoria
* Anatomia

```
<tipo de retorno> nome_da_funcao(<declaracao de parametros>){
    instrucoes;

    return;
}

```

* tipo de retorno
    * É o tipo de variável que a função vai retornar.
    * O padrão é o tipo int
* nome_da_funcao
    * Identificador da funcao.
* declaracao de parametros
    * Tipo de variável que serão passados para as funções
* return
    * Encerra a execução ou retorna algum tipo de dados
### Argumentos vs parametros
   * Argumentos
        * Enviados em uma funcao
   * Parametros
        * Parâmetros que receberão os argumentos das funções

## Consolidando protótipos de funções
* Declarado uma função antes de desenvolver seu escopo. Serve para indicar para a função main que a função
referente ao protótipo que foi declarado existe, mas o código está em outro lugar, pois a execução é TOP-DOWN.
* Ideal é que a função main esteja no inicio apos o prototipos

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
    * Tamanho de uma variável na memória
    * Como seu valor sera interpretado e utilizado
* Tamanho de um tipo pode variar dependendo da arquitetura da cpu

* Promoção de tipos
    * Converter um tipo de tamanho diferente menor em um tipo de maior tamanho
    * conversão implícita de dados feito pelo computador também é chamado de coerção
    * conversão explícita é o cast
        * (tipo) variavel
    * char < int < long < float < double

## Variável Global
* Uma variável que seja acessível a todas as funções do programa

## Variável Local e o Escopo de uma Variável
* Variável fora de um bloco de código [funções, loops, condicionais], tudo que está entre início e fim das chaves,  só existe enquanto esse bloco estiver executando. Quando o bloco chegar ao fim
a variáveis era removida da memória. Isto é o escopo de uma variável. Variáveis locais têm escopo ligada ao bloco
do codigo.

## Variáveis Locais Estáticas (static)
* Escopo local
* Tempo de vida do programa
* Permanece na memoria apos a saida do bloco de codigo

## Argumentos padrão para funções
* Omitir argumentos numa chama de função. A funcao podera ter
valores default. Isso é feito inicializando os protótipos com um valor
no cabeçalho da função.
* Regra da direita para esquerda
    * Os valores padrões são inicializados da direita para a esquerda
    
