#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "pilha.h"

int removeDigits(char stringNumber[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%c", stringNumber[i]);	
	}
	return 0;
}

int main()
{
	int m, n;

	scanf("%d", &m);
	scanf("%d", &n);
	
	

	for (int i = 1; i < 2; i++) {
		int number;
		scanf("%d", &number);
		int numberOfDigits = (int)((ceil(log10(number)))*sizeof(char));
		p_pilha pilha = create_pilha(numberOfDigits);
		for (int i = 0; i < numberOfDigits; number = number - (number % 10) / 10) {
			empilhar(pilha, number % 10);		
		}
		for (int i = 0; i < numberOfDigits; i++) {
			printf("%d", pilha->v[i]);
		}
	}
	
	return EXIT_SUCCESS;
}

