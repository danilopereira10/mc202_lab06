#include <stdlib.h>
#include <stdio.h>

#include "pilha.h"


p_pilha empilhar(p_pilha p, int i) {
	p_no new = malloc(sizeof(No));
	new->number = i;
	new->next = p->top;
	p->top = new;
	return p;
}

int desempilhar(p_pilha p) {
	if (p->top->number == -1) {
		return -1;	
	}
	p_no top = p->top;
	int x = top->number;
	p->top = p->top->next;
	free(top);
	return x;
}

p_pilha create_pilha() {
	p_pilha pilha = malloc(sizeof(Pilha));
	pilha->top = malloc(sizeof(No));
	p_no head = pilha->top;
	head->next = head;
	head->number = -1;
	return pilha;
}
