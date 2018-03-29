#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	char *str;

	// Criar a string str.
	str = (char *) malloc(10);

	// Colocar Maria na string str.
	strcpy(str, "Maria");

	printf("String: %s\nEndereço: %p\n", str, str);
	str = (char *) realloc(str, 100);
	printf("String: %s\nEndereço: %p\n", str, str);

	// Liberar memória.
	free(str);

	return 0;
}