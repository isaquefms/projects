/*
* “char * strchar (char *s, char ch)” que retorna o endereço da última ocorrência de “ch” em “s”;
* caso não exista, retorna NULL (NULL é uma constante simbólica que indica que o ponteiro não
* aponta para nenhuma variável). Implemente a função principal (“main”) para testar a função
* strchar.
*/

#include <stdio.h>

#define TAM 100

// Strlen
int tamString(char *s){
	int i;
	for(i=0; s[i]!='\0'; i++){
		i++;
	}
	return i;
}

// Vou pesquisar o final da string e depois a partir do final procurarei o ch.
char *strchar(char *s, char ch){
	int i;
	i=tamString(s)-1; // Iremos começar pelo ultimo caracter.
	for(i; i>=0; i--){
		if(s[i]==ch){ // Se acharmos a recorrencia retornaremos o endereço.
			return &s[i];
		}
	}
	return NULL;
}

// Mais uma vez vou imprementar uma função que imprime o caracter e o endereço.
void exibeEnderecoString(char *s){
	int i;
	for(i=0; s[i]!='\0'; i++){
		printf("Caracter: %c , Endereco: %ld \n", s[i], &s[i]);
	}
}

// Void main
void main(){
	char s[TAM], ch;
	printf("Insira uma string: ");
	gets(s);
	printf("Insira um caracter: ");
	scanf("%c", &ch);
	exibeEnderecoString(s);
	printf("A ultima ocorrencia do caracter %c eh no endereco %ld \n", ch, strchar(s, ch));
}