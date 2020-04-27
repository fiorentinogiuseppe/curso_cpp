# Orientação à Objetos: .h x .cpp - Ponteiro this, Construtores e Destrutores
## Separando Conceito e Implementação de Classes em Arquivos .h e .cpp
* \#pragma once compila apenas uma vez em referencia cruzada 
## O ponteiro this
* Compliador fornece um ponteiro implicito junto com os nomes das funcoes 
* É passado como argumento oculto para todas as chamadas de funcao de membro nao estatico e esta
disponivel como uma variabel local dentro do corpo de todas as funcoes nao estaticas
* Variavel oculta com o endereço da classe na heap
* this é um ponteiro que aponta para o objeto
## Construtores de Metodos
* É um metodo que é chamado automaticamente durante a instanciação de um objeto
* Este metodo deve ter o mesmo o nome da classe nao possui retorno e pode receber nenhum
ou varios parametros
* Inicia atributos , executa ações inicias em relação ao objeto que esta sendo criado
* Construtor é criado automaticamento desde que não seja criado
* Não é obrigatorio criar o construtor
## DesConstrutores de Metodos
* Tem o mesmo nome da classe, mas tem um simbolo de ~(til) antes do seu nome
* Automaticamente invocado quando o objeto é destruido
* Neste caso quando o objeto deixa seu escopo ele sera destruido na stack e o destrutor
sera chamado
* Quando um objeto é criado na heap atraves de ponteiros ele so podera se destruido da memoria
com a funcao delete. E somente apos ela ser chamada o destrutor do objeto sera chamado
```
delete(obeto)
```
* Usado para liberar memoria
* Nao aceita parametros
* E nao possui retorno
* Na classe so pode haver 1 destrutor declarado e nao é obrigatorio
* Cada {} cria um novo escopo 