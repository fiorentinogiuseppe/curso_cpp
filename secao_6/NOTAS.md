# Estruturas de Decisão Condicional (if-else  |Operador Ternário ? | Switch Case)

##  Estrutura de Decisão Condicional se então, if e else - Conceito
* Se
    * A condicao tem de ser vardadeira para a instrucao ser executada.

```
if (condicao ou condicoes)
    intrucoes;
```

* Senao
    * Caso a condicao do se for falso
    * Caso contrario do if

```
if (condicao ou condicoes)
    intrucoes;
else
    intrucoes;
```

## Operador Ternário (Condição) ? (true) : (false) - Conceitos
* Semelhante ao ifelse porém em uma única linha. 

```
(condicao) ? instrucao true: instrucao false

```

## Estrutura de Seleção Condicional Escolha/Caso, Switch/Case
* Selecao multipla de diferentes acoes baseadas nos possiveis valores de uma unica variavel ou expressao inteira
* Deve-se colocar um break em cada case para ele sair do switch caso entre na condicao
* O case nao aceita operador logico
```
    switch(var){
        case 1:
            intrucoes;
            break;
        case n:
            intrucoes;
            break;
        default:
            intrucoes;
            break;    
    }

```