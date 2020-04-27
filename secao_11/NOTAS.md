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

## Enviando Arrays para Funções
* O parametro da função deve ter a indicação que receberá um vetor

```
<tipo> FuncName(<tipo> NomeDoArray[], int TamVetor)
```

* Para enviar como argumento apenas o nome do array deve ser enviado, como uma variavel
qualquer
* Como não se sabe o tamanho do vetor é indicado enviar também como argumento
o tamanho do vetor, contudo da para saber o tamanho utilizando o sizeof. Ou seja

```
sizeof(Array)/sizeof(<tipo>);
```
* Ou utiliza o size da biblioteca array

## Trabalhando com Arrays Multidimensionais (Matrizes)
* Declaração de um array de 2 dimensoes
   * Tam_Dim_1 numero de linhas
   * Tam_Dim_2 numero de colunas
```
<tipo> NomeDaMatriz [Tam_Dim1][Tam_Dia2]
```
* Declaração de um array de 3 dimensoes
```
<tipo> NomeDaMatriz [Tam_Dim1][Tam_Dia2][Tam_Dim3]
```

* Declaração de um array de n dimensoes
```
<tipo> NomeDaMatriz [Tam_Dim1][Tam_Dim2]...[Tam_Dimn]
```

## For Ranged Loop - Lendo Arrays com conceito de for each
* Forma mais otimizada de percorrer elementos de um array

```
for(<tipo> VarRecebeCadaItemArray : NomeDoArray){
    Instrucao;
}
```

* auto o compilador detecta automaticamente o tipo de dados
* std::fixed recebe os dados do setprecision e indica o numero de casas apos a virgula
pois o default é a quantidade de numeros antes e depois da virgula