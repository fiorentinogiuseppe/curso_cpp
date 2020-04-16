# Funções Conceitos e Desenvolvimento

## Consolidando a Anatomia de uma função
* Funcao é um bloco de codigo que pode ser chamado duraten a execucao
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