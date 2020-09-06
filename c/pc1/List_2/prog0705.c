#include <stdio.h>

// Defines
#define DIM 20
#define SEP_NOME ", "

// Função para contar o numero de elementos dentro de uma string
int strlen(char *s){
	int i = 0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}

// Função para verificar se uma string é nula
int isnull(char *s){
	return (s[0] == '\0');
}

// Função para copiar a string original para a string destinatario
char *strcpy(char *dest, char *orig){
	int i;
	for(i=0; orig[i]!='\0'; i++){
		dest[i] = orig[i];
	}
	dest[i] = '\0';
	return dest;
}

// Outra maneira de implementar a função strcpy
/*

char *strcpy(char *dest, char *orig){
	int i=0;
	while(dest[i] = orig[i]){
		i++;
	}
	return dest;	
}
*/

// Função que concatena(une duas strings)
char *strcat(char *dest, char *orig){
	int i, len;
	for(i=0, len=strlen(dest); orig[i]!='\0'; i++, len++){
		dest[len] = orig[i];
	}
	dest[len]='\0';
	return dest;
}

void main(){
	char Nome[DIM+1], Sobrenome[DIM+1], Completo[2*DIM+1];
	while(1){
		printf("Nome: ");
		gets(Nome);
		if(strlen(Nome)==0){
			break; // Terminar o programa caso a string esteja vazia
		}
		// Colocndo o sobrenome, nome na string completo
		printf("Sobrenome: ");
		gets(Sobrenome);
		strcpy(Completo, Sobrenome); // Copiar o sobrenome
		strcat(Completo, SEP_NOME);  // Juntar o separador
		strcat(Completo, Nome);      // Juntar o primeiro nome
		puts(Completo);
	}
}