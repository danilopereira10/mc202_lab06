#ifndef PILHA_H
#define PILHA_H
typedef struct No {
	struct No *next;
	int number;
} No;

typedef struct No * p_no;

typedef struct {
	p_no top;
} Pilha;

typedef Pilha * p_pilha;

p_pilha empilhar(p_pilha p, int i);

int desempilhar(p_pilha p);

p_pilha create_pilha();


#endif
