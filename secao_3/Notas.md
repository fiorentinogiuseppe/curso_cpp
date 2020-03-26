#Secao 3
## O que é a tal abstração tão falada na área de computação?
 * Abstração - Desprezar detalhes irrelevante e secundário.
Focando em detalhes necessários, importantes e essenciais.
   * Quanto maior o nível de abstração mais dados não relevantes para a dada
   situação são ocultos.
## O que é uma linguagem de programação
 * Método padronizado para comunicar instruções para o CPU., pois essa nao reconhece
 a linguagem humana. O que esta conhece é a linguagem binária, ou seja linguagem de máquina
 que é a linguagem entendida pela máquina
## Linguagem baixo e alto nível
 * Linguagem de alto nível de abstração
    * Longe do codigo de maquina e mais próxima a linguagem humana
    * Não relacionada a arquitetura do computador e não precisa conhecer características
    de arquitetura e organização
 * Linguagem de baixo nível de abstração
    * Segue as características e estão diretamente relacionadas a arquitetura do computador
## Compilador
 * É o tradutor que converte da linguagem de programação para linguagem de máquina
### Codigo fonte
 * COdigo legivel por humano
### Codigo de maquina
 * Codigo legivel por maquina

::warning:: Comentario sao ignorados pelo compilador

## O que é uma linguagem C++
 * Extensão da linguagem C
 * Aprimora a linguagem C e insere o poder de OO a linguagem
 * C++ é um superset da linguagem C, adicionando novos elementos.
 * C++ une 3 paradigmas
   * Estruturada
   * OO
   * Generica
 
## Processo de Build C++ Código Fonte e Pré-Processamento
### Pre processador
 * Configura o código fonte para o compilador e ocorre antes da compilação. Executando diretivas de
 pré-processamento e ou fazem determinadas modificações no arquivo fonte

### Compilador
 * Programa de computador que converte um codigo fonte em um programa equvalente escrito em linguagem de maquina.
 Cria-se um object file. Verifica se existe algum erro de sintaxe, traduz para codigo de maquina e caso tenha algum erro
 ele retorna alguma informação caso não tenha erro gera o codigo objeto
 #### Codigo objeto
  * Resultado da compilação do codigo fonte. Gera codigo de maquina incompleto. Ainda sendo necessario linkar com as 
  bibliotecas referenciadas no codigo.
 ### Linker 
  * Pega o codigo objeto adiciona bibliotecas e converte para algum executavel.
 ### Loader
  * Carrega o programa na memoria RAM do computador
 ### Execucao
  * A CPU executa o programa instrução por instrução.
### Include 
 * \# - diretiva de pre-processador
 * Instrui o pré processador a incluir no programa o conteúdo do arquivo de cabeçalho indicado
 * <> - O arquivo header é buscado nos lugares indicados por uma variável do sistema chamado library path
 * "" - O arquivo header é buscado no caminho indicado. Caso só esteja o nome será buscado no diretório atual
 * .h - não é uma biblioteca sao apenas arquivos de definicoes, apenas na linkedinção que ocorre a inclusao da biblioteca
### Typedef
 * Cria alias para tipos de dados existente.
 * Da mais trabalho para o pré processador
 ### Compilação
### Key word 
 * Palavras reservadas que não pode ser utilizadas