# TR11
#### Ordenação de vetores
##### Programa feito e testado em sistema operacional Linux Ubuntu 20.04 e GCC 9.4

> O quê esse código faz?

O programa funciona em conjunto com um arquivo .h que contem a chamada das funções presentes no .c, chamada para uma função COMP de comparação definida pelo professor e uma struct.  
O propośito do programa é ordenar os valores inseridos no vetor em ordem crescente. 

Essa struct contem:
- Inteiro N (Tamanho do vetor)
- Inteiro P (Número de elementos desse vetor)
- Ponteiro de ponteiro vazio elems (vetor de elementos)
- Ponteiro para função COMP  

Essas funções são:  
- Create  
Nesta função é alocada memória para o vetor elems de acordo com o valor do inteiro N.  

- Add  
Verifica se há espaço para mais um elemento no vetor, caso tenha, um novo elemento é inserido na última posição, a função COMP é chamado para reordenar o vetor e o valor de P aumenta.  

- Remove  
O valor de P é diminuido, removendo o último elemento adicionado.  

Há ainda mais uma função auxiliar:
- Ordena  
Compara se o valor na posição i do vetor é menor que o da posição j, se for, eles trocam de posição.

> Como baixar?

Para fazer o download do código basta clica no botão "Code" e, em seguida, "Download Zip".  
Após o download os arquivos do repositório (pasta TR4 e README.md) devem ser extraídos do .zip.  

##### Alternativa

Caso deseja baixar somente o arquivo do programa, abra a pasta TR4, clique nos arquivos e em seguida clique com o botão direito em "Raw", selecione "Salvar link como" e em Salvar.

> Como compilar e executar esse código?

Para compilar o programa, insira em seu terminal Linux: *gcc TR44_511916.c -o TR4_511916*  
Para executar o programa, insira em seu terminal Linux: *./"Seu arquivo main" TR4_511916*
