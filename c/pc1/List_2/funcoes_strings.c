#include <stdio.h>
#include <ctype.h>

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

// Função que calcula quantas vezes um caracter aparece na string
int strcountc(char *s, char ch){
	int i, conta;
	for(i=conta=0; s[i]!='\0'; i++){
		if(s[i]==ch){ // Se for o caractere que procuramos
			conta++;  // Iniciamos o contador
		}
	}
	return conta;
}

// Função que calcula quantos digitos existem na função
// Para usar a função isdigit() precisamos adicionar #include <ctype.h>
int strcountd(char *s){
	int i, conta;
	for(i=conta=0; s[i]!='\0'; i++){
		if(isdigit(s[i])){ // Se o caractere for um digito
			conta++;       // Incrementar o contador
		}
	}
	return conta;
}

// Função que devolve o índice da primeira ocorrência do caractere na string
int indchr(char *s, char ch){
	int i;
	for(i=0; s[i]!='\0'; i++){
		if(s[i]==ch){
			return i;
		}
	}
	return -1; // Retornaremos -1 pois 0 é um indice possivel na string (primeiro elemento da string)
}

// Outra forma de se programar a função indchar
/*
int indchr(char *s, char ch){
	while(s[i]!=ch && s[i]!='\0'){
		i++;
	}
	if(s[i]=='\0'){
		return -1;
	}
	else{
		return i;
	}
}
*/

// Função que verifica se a string é um palíndromo, isto é, se é lida da mesma forma da esquerda para a direita.
int strpal(char *s){
	int i, j;
	for(i=0, j=strlen(s)-1; i<j; i++, j--){
		if(s[i]!=s[j]){ // Se os caracteres não forem iguais.
			return 0; // Não é palíndromo
		}
	}
	return 1;
}

// Inverte a string e devolve-a invertida
char *strrev(char *s){
	int i, len;
	char aux;
	for(i=0, len=strlen(s)-1; i<len; i++, len--){
		aux=s[i];     // Nessa parte do código acontece algo legal,
		s[i]=s[len];  // enquanto a variável que roda as posições mais baixas da string for menor que a que roda as maiores posições
		s[len]=aux;   // os primeiros espaços recebem os ultimos caracteres e os ultimos recebem os primeiros caracteres. 
	}
	return s;
}

// Função que compara as strings s1 e s2 alfabeticamente
// Devolve <0 Se s1 é alfabeticamente menor que s2
// Devolve 0  Se s1 e s2 são iguais
// Devolve >0 Se s1 é alfabeticamente meior que s2 
int strcmp(char *s1, char *s2){
	int i=0;
	while(s1[i]==s2[i] && s1[i]!='\0'){
		i++;
	}
	return (s1[i] - s2[i]); // Caso o compilador não retorne os valores certos usar o (unsigned char)
}

// Função que coloca um espaço em branco apos cada um dos caracteres da string
char *strpad(char *s){
	int i=strlen(s);
	s[2*i] = s[i]; // Colocar o delimitador da string na nova posição
	for(i--; i>=0; i--){
		s[2*i] = s[i]; // Os caracteres avançam para o dobro do indice
		s[2*i+1] = ' '; // No indice a frente do caracter é colocado um espaço vazio
	}
	return s;
}

// Apagar o caractere todas as vezes que ele aparecer na string
char *strdelc(char *s, char ch){
	int i, j;
	for(i=j=0; s[i]!='\0'; i++){
		if(s[i]!=ch){
			s[j++] = s[i];
		}
	}
	s[j]='\0';
	return s;
}



