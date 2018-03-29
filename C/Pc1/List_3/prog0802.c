#include <stdio.h>

void main(){
	char s[100];
	char *ptr = s; // Aponta para o primeiro caractere de s.
	printf("Insira uma string: ");
	gets(s);
	if(*ptr == '\0'){
		return;
	}
	while(*ptr!='\0'){
		putchar(*ptr++);
	}
	printf("\n");

	// Imprimir a string ao contrario.
	ptr--; //Por causa do '\0'.

	while(ptr>=s){
		putchar(*ptr--);
	}
	printf("\n");
}