# &Referências: Conceitos e Prática
## O que são referências?
* Apelido para variaveis
* Fazem referencia a outras coisas
* Não pode inicializar, pois não tem endereço e não é inicializado na memoria
* Pode ser utilizado como uma variavel normal
* Tem que ser inicializado ao ser criado
* So pode ser inicializado uma unica vez.
```
    tipo & varname = start_value;
```

## Consolidando os conceitos de Referências
* Não é uma variavel é apenas um novo rotulo
## Passagem de argumentos para funções por valor
* Copia  os valores dos argumentos e coloca para os parametros da função
* Essaes parametros são locais e sao variaveis diferentes e com endereco diferente dos argumentos
porem com valores iguais.  
##  Passagem de argumentos para funções por referência utilizando referências
* Utilizar a idia de referencia. O que for enviado para a função passará a ser referenciado pelos parametros
* Os parametros não recebem apenas uma copia do valor eles passam a ser referencia dos argumentos
## Passagem de argumentos para funções por referência utilizando ponteiros
* É uma passagem por referencia utilizando ponteiros.
* Diferente da referencia por referencia este precisa ser desreferenciados para chegar ao valor
apontado ou alterá-lo.