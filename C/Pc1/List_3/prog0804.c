#include <stdio.h>

int tamString(char s[]){
	char *ptr = s;    // Guarda o endereço inicial.
	while(*s!='\0'){  // Enquanto não chegarmos ao fim.
		s++;          // Incrementar o ponteiro.
	}

	return (int) (s-ptr);
}

void main(){
	char Nome[100];
	printf("Introduza uma string: ");
	gets(Nome);
	printf("%d\n", tamString(Nome));
}