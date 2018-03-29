#include <stdio.h>

void main(){
	char Nome[50];
	printf("Introduza o Nome Completo: ");
	gets(Nome);
	printf("Nome Completo: %s\n", Nome);
}