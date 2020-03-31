#Secao 4
# O que é e como declarar uma variável?
## Arquitetura basica
* CPU
 * Busca, interpreta e executa as instruções dos programas
* Memoria Volatil
 * Memória RAM, que é local temporária, enquanto o processo existir, para armazenar e ler informações dos
 programas e outros componentes do computador
* Memoria Nao volatil
 * Armazenamento permanente, ate que seja removido.
* Dispositivos I/O

## Criando e Utilizando Variáveis em C++
### Variavel
* Local salvo na memória RAM do computador que o programa pode ler ou alterar seu valor

## Os principais tipos de dados
* Colecao de valores e as suas operações
* Tipos
 * int
   * Inteiros
 * float
   * Decimais
 * double
   * Decimais muito grande
 * char
   * Unico caracter
   * Aspas simples
 * bool
   * Booleano
   * Tipo logico
 * void
   * Ausencia de tipo

## Regras para declarar variaveis
 * Letras, numero ou _
 * Inicia com letras ou _
 * Não pode utilizar palavras reservadas da linguagem c++
 * Declaração antes da utilização

## Tipo inteiro: int
 * 4bytes
 * com sinal
 * intervalo de -2.147.483.648 a 2.147.483.647

## Tipo ponto flutuante: double/float
 * Numero reais
 * Float
    * 4bytes
    * Intervalo 3.4E +/- 38 (7 digitos)
 * Double
    * 8bytes
    * Intervalo 1.74E +/- 308 (15 digitos)

## Tipo caracter: char e as Codificações ASCII e UNICODE
 * representa caracteres
 * 1byte
 * codificação mais usada era a ASCII (0-127)
   * Cada numero tem um caracter
 * Com a globalização surgiu o UNICODE - 16 bits de caracteres
 * wchar_t
   * Caracter largo para representar o UNICODE

## Tipo Bool
 * 1byte
 * 2 valore
   * False - Zero
   * True - 1 ou qualquer coisa

##Modificadores de tipo
 * Long - Aumenta a capacidade de armazenamento
 * short - Diminui a capacidade de armazenamento
 * signed - Com sinal
 * unsigned - Sem sinal
 * Pode haver uma combinação dos modificadores
## Sizeof
 * Operador utilizado para retornar o tamanho em bytes que um tipo de dado ocupa na memoria

## Constantes
 * const
   * É uma variável que não pode ser alterado
   * const [tipo] [nome] = [valor];
  * Define
    * Diretiva de pre processador de codigo
    * Substitui um texto por outro
