#include <stdlib.h>
#include <stdio.h>

#include "pilha.h"


void empilhar(p_pilha p, int i) {
	p->v[p->topo] = i;
	p->topo++;
}

int desempilhar(p_pilha p) {
	p->topo--;
	return p->v[p->topo];
}

p_pilha create_pilha(int size) {
	p_pilha pilha = malloc(sizeof(p_pilha));
	pilha->v = malloc(size * sizeof(int));
	pilha->topo = 0;
	return pilha;
}
