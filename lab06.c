#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "pilha.h"

int main()
{
	int m;
	scanf("%d", &m);

	for (int i = 1; i <= m; i++) {
		int digitosRemovidos = 0;
		int numeroDeDigitos;
		//unsigned long long number;
		int n;
		//scanf("%llu", &number);
		p_pilha pilha = create_pilha();
		//int numberOfDigits = floor(log10(abs(number))) + 1;
		char caracter='-';
		while (caracter != ' ') {
			scanf("%c", &caracter);
			//pilha = empilhar(pilha, number % 10);
		}
		scanf("%d ", &n);

		for (int i = 0; i < numberOfDigits; number = (number - (number % 10)) / 10, i = i + 1) {
			printf("%d", desempilhar(pilha));	
		}
		/*for (int i = 0; number > 0; number = (number - (number % 10)) / 10, i = i + 1) {
				
		} */
		printf("\n%d Number of digits", numberOfDigits);
		//Funcionando até aqui!!
		int primeiroValor = desempilhar(pilha);
		p_pilha segundaPilha = create_pilha();
		int proximoValor;
		//printf("lugar 2");
		if(primeiroValor >= 0) {
			empilhar(segundaPilha, primeiroValor);
			for (int i = 2; i <= numberOfDigits && digitosRemovidos != n; ) {
				proximoValor = desempilhar(pilha);
				int continuaDesempilhando = 1;
				while (continuaDesempilhando && digitosRemovidos != n) {
					int valorSalvo = desempilhar(segundaPilha);
					if (valorSalvo == - 1) {//pilha vazia
						empilhar(segundaPilha, proximoValor);
						break;
					}
					if (proximoValor > valorSalvo) {
						i = i + 1;
						digitosRemovidos += 1;
					} else {
						continuaDesempilhando = 0;
						empilhar(segundaPilha, valorSalvo);
						empilhar(segundaPilha, proximoValor);
						i = i + 1;
					}
				}
			}
			//pro 1 deveria funcionar tranquilo
			//pro 10 também
			//pro 100 também
			//pro 999 também
			//pro 7589
			if (digitosRemovidos == n && n > 0) {
				empilhar(segundaPilha, proximoValor);
			}
			while (digitosRemovidos != n) {
				desempilhar(segundaPilha);
				digitosRemovidos = digitosRemovidos + 1;
				//printf("lugar 4");
			}
			if (digitosRemovidos == n) {
				int proximoValor = desempilhar(pilha);
				while (proximoValor != - 1) {
					empilhar(segundaPilha, proximoValor);
					proximoValor = desempilhar(pilha);
					//printf("lugar 2");
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
		printf("\n");	
	}
	
	return EXIT_SUCCESS;
}
