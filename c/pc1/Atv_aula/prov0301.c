#include <stdio.h>

int contar(char *str1, char *str2){
	int i, cont=0, aux, j;
	for(i=0; str1[i]!='\0'; i++){
		if(str1[i]==str2[0]){
			aux=i;
			for(j=0; str2[j]!='\0'; j++, i++){
				if(str1[i]!=str2[j]){
					i=aux;
					break;
				}
				if(str2[j+1]=='\0'){
					cont++;
				}	
			}
			i=aux;
		}
	}
	return cont;
}

void main(){
	char str1[]={"12programacao 12 34de 123 4 computadores1234"};
	char str2[20];
	printf("Insira Uma string: ");
	gets(str2);
	printf("%s  ->   %d\n", str2, contar(str1, str2));
}