#include <stdio.h>

int tamString(char *s); // Prototipo da função.

void main(){
	char s[100];
	char *ptr = s; // Aponta para o primeiro caractere de s.

	printf("Insira uma string: ");
	gets(s);

	printf("%d\n", tamString(s));
}

int tamString(char *s){
	char *ptr = s; // Guardar o endereço inicial.
	while(*s!='\0'){ // Enquanto não chegarmos ao fim.
		s++; // Incrementando o ponteiro.
	}
	return (int) (s-ptr); // Retorna a diferença entre os endereços.
}