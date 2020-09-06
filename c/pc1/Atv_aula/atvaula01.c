#include <stdio.h>

void trocar(int *a, int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

void main(){
	int a=10;
	int b=20;
	// Trocar valores
	trocar(&a, &b);
	printf("%d %d \n", a, b);
}