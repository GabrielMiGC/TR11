#include "ordvetor.h"

VETORORD* VETORD_create(int n, COMP* compara) {
	VETORORD* vetor = malloc(sizeof(VETORORD)); //aloca memória para um vetor inicialmente vazio
	vetor->N = n;
	vetor->P = 0;
	vetor->elems = malloc(n * sizeof(void*));
	vetor->comparador = compara;
	return vetor;
}
void ordena(VETORORD* vetor){ //compara se o valor na posição elems[i] é menor do que o da posição j, se for, trocam de posição
    void* aux;
    for(int i = 0; i < vetor -> P; i++){//inicia atrás do index J
        for(int j = 1; j < vetor -> P; j++){
            if(vetor->elems[i] < vetor->elems[j])
                aux = vetor -> elems[i];
                vetor -> elems[i] = vetor -> elems[j];
                vetor -> elems[j] = aux;
        }
    }
}

void VETORD_add(VETORORD* vetor, void* newelem) {
	if (vetor->P < vetor->N) { // se houver espaço no vetor um novo elemento pode ser adicionado
            vetor -> elems[vetor->P] = newelem;//último elemento passa a ser o recem adicionado
    }
            vetor -> P++; //cria-se um novo espaço vazio
            ordena; // ocorre a cada adĩção para que o vetor se mantenha ordenado
}
void* VETORD_remove(VETORORD* vetor){
	vetor->P--;
}

