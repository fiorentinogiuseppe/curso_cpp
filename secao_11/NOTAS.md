# Vetores(Arrays) e Matrizes
## Conceitos Essenciais Sobre Array(Vetores) e Matrizes
* Regiao de memoria RAM dividida em partes capaz de armazenar dados um por um
nomeada por um unico nome e em compartimento diferentes. Em que cada compartimento
tem indices ou numeracoes para itentificar cada compartimento indo de 0 ate n-1 valores
* Colegao de elementos do mesmo tipo snmeod uma variavel composta em que cada
elemento pode se acessado individualmente por seu indice. Com o mesmo tipo.
### Vetor ou array
* Variavel comporta e homogecia composta apenas de uma dimensão
* Vetores sao alocados de forma contigua, ou seja sequencialmente na
 memoria um ao lado doo outro.
 * Array tem tamanho fixo
 * Não existe checagem de limite do Array tendo erro em tempo de execução
### Matriz
* Variavel comporta e homogecia composta de mais de uma dimensão. Em que cada
elemento é acessado pelo numero da linha e pelo numero da coluna. Ou seja é
acessado por linha.

##  Como declarar, usar e inicializar um Array(Vetor)
```
<tipo> NomeDoArray [ QuantdadeDeElementos ];
```

* Array do tipo <tipo> chamado NomeDoArray indo do elemento 0 até QuantidadeDeElementos - 1
* Para acessar um indice qualquer 

```
NomeDoArray [ Indice ];
```
* Assim é possível acessar e modificar
* A inicialização pode ser da seguinte forma em c
```

<tipo> NomeDoArray [ QuantdadeDeElementos ] = {dado1, dado2, ..., dadon};

```

* ou da forma em c++

```

<tipo> NomeDoArray [ QuantdadeDeElementos ] {dado1, dado2, ..., dadon};

```
* Dessa forma pode emitir o QuantidadeDeElementos o compilador faz isso automaticamente
e seta o valor, desde que seja inicializado com algum valor
* Caso for iniciado com float deve ter o f para indicar que o numero é um float
e nao um double
* Pode-se inicializar todos os elementos do array com um unico valor

```

<tipo> NomeDoArray [ QuantdadeDeElementos ] {dado1};

```