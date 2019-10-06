#ifndef PILHA_H
#define PILHA_H


typedef struct {
	int *v;
	int topo;
} Pilha;

typedef Pilha * p_pilha;

void empilhar(p_pilha p, int i);

int desempilhar(p_pilha p);

p_pilha create_pilha(int size);


#endif
