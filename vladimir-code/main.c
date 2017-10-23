#include "vladimir.h"

int *custos;
int *caminho;

// Aloca o grafo com o numero máximo de vértices (11)
int **aloca_grafo(int **grafo) {
	grafo = (int **) calloc (11, sizeof(int *));
    for (int i = 0 ; i < 11 ; i++)
    	grafo[i] = (int *) calloc (11, sizeof(int));

    return grafo;
}

int main() {

	int **grafo = aloca_grafo(grafo);

	int a = 0;

	loading();

	introducao();

	// Menu principal

	while(a != 2){

		a = menu();

		if (a == 0) start(grafo);
		if (a == 1) credits();
		if (a == 2) return 0;
	}

	return 0;
}
