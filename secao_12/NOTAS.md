# VAritmética de Ponteiros e a relação com Vetores *(ptr + 2) , ptr++, ptr--, *ptr
## A relação de Arrays(Vetores) com os Ponteiros

* Ptr_Array[i] é  mesmo que *(Ptr_Array + i)
* Se o Vetor estiver sendo enviado por referência o valor será mudado pois Array terá o endereço de Vetor e conseguirá mudar seus valores

## Conceitos essenciais sobre Aritmética de Ponteiros
* O endereço de memoria de uma variavel é o primeiro endereço dessa variavel
* O nome do vetor é o mesmo que escrever o endereco de memoria do seu primeiro elemento
ou indice zero [0]
* ptr+1 ou ptr++
    * Desloca uma posicao em relacao ao tamanho do tipo de dados que esta apontando
    * Por exemplo
        * Se criarmos um int* ptr assim ao incrementar +1 é o mesmo que estivesemos 
         saltando 4bytes, assim incrementar é salvar com um offset que é o tamanho do tipo de dados
         que o ponteiro foi criado
## Quando a Aritmética de Ponteiros Altera o Valor Do Ponteiro
* ptr++ é o mesmo que ptr=ptr+1 e diferente de ptr+1, pois o ultimo nao insere a modificacao
na variavel ptr
* ptr + 2 é o mesmo que um salto de 2 tipos de dados ou seja um incremento de ptr + 2*sizeof(dado)
* ptr + 2 não altera o valor de ptr pois nao estamos atribuindo a ptr so estamos adicionando e nao inserindo em nenhuma variavel
* ptr[i] é o mesmo que *(ptr+i) porem de forma mais complicada  
* ptr[i] esta usando o valor alocado em i e nao alterando seu valor
* Nome do vetor é o mesmo que &Vetor[0]