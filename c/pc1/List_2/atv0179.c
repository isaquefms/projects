/*
* Implemente a função int compara (char string1 [ ], char string2 [ ]) que retorna 1 caso
* as strings sejam iguais e 0 caso contrário.
*/

// Esse é o exercício numero 75 de strings.

#include <stdio.h>

#define TAM 100 // Definindo o tamanho padrão.

// Vamos implementar a função strlen para melhorarmos a comparar.
int quantCaracteres(char string[]){
	int indice, quant=0;
	for(indice=0; string[indice]!='\0'; indice++){
		quant++;
	}
	return quant;
}

// Nessa função eu busquei a maior string para percorer todas por completo.
int compara(char string1[], char string2[]){
	int indice, maiorIndice;
	// Vamos comparar qual é a maior string e usar seu tamanho para comparar com inteligencia.
	if(quantCaracteres(string1)>quantCaracteres(string2)){ // Caso a primeira seja maior.
		maiorIndice=quantCaracteres(string1); // Usaremos ela como delimitador.
	}
	else if(quantCaracteres(string2)>quantCaracteres(string1)){ // Caso a segunda seja maior.
		maiorIndice=quantCaracteres(string2); // Usaremos ela como delimitador.
	}
	else{ // Caso as opções acima não sejam preenchidas elas são iguais.
		maiorIndice=quantCaracteres(string1); // Usaremos qualquer uma.
	}
	for(indice=0; indice<maiorIndice; indice++){ // Lembrando que'maior indice está guardando a quant de caracteres.
		if(string1[indice]!=string2[indice]){
			return 0;
		}
	}
	return 1;
}

void main(){
	char string1[TAM], string2[TAM];
	int controle;
	printf("Insira a primeira String: ");
	gets(string1);
	printf("Insira a segunda String: ");
	gets(string2);
	controle=compara(string1, string2);
	if(controle==1){
		printf("Strings Iguais!! %s %s\n", string1, string2);
	}else{
		printf("Strings Diferentes!! %s %s\n", string1, string2);
	}
}
