#include <stdio.h>

void linha(){
	int i;
	for(i=1; i<=20; i++){
		putchar('*');
	}
	putchar('\n');
}

void main(){
	int i;

	linha(); // Escreve uma linha de asteriscos
	puts("Numeros entre 1 e 5");
	linha(); // Escreve outra linha de asteriscos

	for(i=1; i<=5; i++){
		printf("%d\n", i);
	}

	linha(); // Escreve a ultima linha de asteriscos
}