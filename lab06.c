#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "pilha.h"

int main()
{
	int m;;
	scanf("%d ", &m);
	printf("oi 1");
	int digitosRemovidos = 0;

	for (int i = 1; i <= m; i++) {
		long number;
		int n;
		scanf("%ld ", &number);
		printf("oi 2");
		scanf("%d", &n);
		printf("oi 3");
		int numberOfDigits = floor(log10(abs(number)));
		printf("%d", numberOfDigits);
		
		p_pilha pilha = create_pilha();
		for (int i = 0; i < numberOfDigits; number = (number - (number % 10)) / 10, i = i + 1) {
			pilha = empilhar(pilha, number % 10);	
		}
		int primeiroValor = desempilhar(pilha);
		printf("%d", primeiroValor);
		p_pilha segundaPilha = create_pilha();
		if(primeiroValor >= 0) {
			empilhar(segundaPilha, primeiroValor);
			for (int i = 1; i <= numberOfDigits - 1; i = i + 1) {
				int proximoValor = desempilhar(pilha);
				int valorSalvo = desempilhar(segundaPilha);
				if (proximoValor > valorSalvo) {
					digitosRemovidos += 1;
					empilhar(segundaPilha, proximoValor);
				} else {
					empilhar(segundaPilha, valorSalvo);
					empilhar(segundaPilha, proximoValor);
				}
			}
			if (digitosRemovidos != n) {
				for (; digitosRemovidos != n;) {
					desempilhar(segundaPilha);
					digitosRemovidos = digitosRemovidos + 1;
				}
			}
		}
		p_pilha terceiraPilha = create_pilha();
		for (int i = 1; i <= numberOfDigits - n; i++) {
			empilhar(terceiraPilha, desempilhar(segundaPilha));
		}
		for (int i = 1; i <= numberOfDigits - n; i++) {
			printf("%d", desempilhar(terceiraPilha));
		}
	}
	
	return EXIT_SUCCESS;
}
