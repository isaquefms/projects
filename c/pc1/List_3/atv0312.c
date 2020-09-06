#include <stdio.h>

char *strstr(char *str1, char *str2){
	int i, j, aux;
	for(i=0; str1[i]!='\0'; i++){
		if(str1[i]==str2[0]){
			aux=i;
			for(j=0; str2[j]!='\0'; j++, i++){
				if(str2[j]!=str1[i]){
					i=aux;
					break;
				}
				return &str1[aux];
			}
		}
	}
	return NULL;
}

/*
char *strstr(char *str1, char *str2){
	int i, aux, j;
	if(existeSubstring==0){
		return NULL;
	}
	for(i=0; str1[i]!='\0'; i++){
		if(str1[i]==str2[0]){
			aux=i;
			for(j=0; str2[2]!='\0'; j++, i++){
				if(str2[j]!=str1[i]){
					i=aux;
					break;
				}
				return &str1[aux];
			}
		}
	}
}
*/

void exibirEnderecoString(char *str1){
	int i;
	for(i=0; str1[i]!='\0'; i++){
		printf("Caracter= %c, Endereco= %ld\n", str1[i], &str1[i]);
	}
}

void main(){
	char str1[100], str2[100];
	printf("Insira sua String: ");
	gets(str1);
	printf("Insira sua Substring: ");
	gets(str2);
	exibirEnderecoString(str1);
	printf("A primeira ocorrencia da substring esta no endereco: %ld\n", strstr(str1, str2));
}
