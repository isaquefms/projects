#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char s[200], *ptr; // Ponteiro para um conjunto de chars.
	printf("Qual a sua string? ");
	gets(s);

	// Alocar a memória necessária
	ptr = (char *) malloc(strlen(s)+1); // '\0' também conta.
	if(ptr==NULL){
		puts("Problemas na Alocação da Memória");
	}else{
		// Colocar na string outra copia da string s.
		strcpy(ptr,s);

		// Mostrar as duas strings.
		printf("String Original: %s\nCopia: %s\n", s, ptr);

		// Liberar a memória existente em ptr.
		free(ptr);
	}
}