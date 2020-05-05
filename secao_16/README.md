# Structs - Estruturas em C++
## O que são structs e diferenças para classes
* Struct é um grupo de elementos de dados agrupados sob um nome.
* Esses elementos de dados, conhecidos como membros podem ter diferentes tipos
e diferentes tamanhos
* Modelando um tipo de dados que so entra na memoria ram qnado um novo tipo de dados
for criado a memoria ram sera criado e modelado. 

```
struct Nome_struct{
    rotulo_de_visibilidade:
    variaveis
} <declaracoes>;
```
* Apos o } e antes do ; podemos declarar o objeto que desejamos com isso o nome
da struct podera ser omitida ja que a declaracao ja ocorreu
* A utilização pode ser feita

```
   Nome_struct var;
```

* Como padrao os membros sao publicos. Sem o rotulo_de_visibilidade o padrão é publico
diferente de classes que é privado
* Utilizado para modelas tipos de dados abstratos

# Relembrando typedef
* Apenas um alias para tipos e structures