/*
* Implemente o procedimento void imprime_sobrenome (char nome_completo[ ]) que
* recebe o nome completo de uma pessoa e imprime o último nome. Por exemplo, para o nome
* completo “Jose Maria da Silva”, o programa deve exibir: “Silva”
*/

// Esse é o exercício numero 76 de strings.

#include <stdio.h>

#define TAM 100

int quantCaracteres(char string[]){
	int indice, quant=0;
	for(indice=0; string[indice]!='\0'; indice++){
		quant++;
	}
	return quant++;
}

// A minha intenção nessa função é achar aonde começa e termina o sobrenome. Acho o final pela strlen.
void imprimeSobrenome(char nomeCompleto[]){
	int termino, inicio, indice;
	termino=quantCaracteres(nomeCompleto); // Exatamente nesse indice, nomecomple[quant] está o delimitador '\0', portanto o final da string nome.
	// Buscaremos pelo primeiro espaço do fim para o inicío.
	for(indice=termino-1; indice>=0; indice--){ // Começaremos do final e iremos para o início da string nome.
		if(nomeCompleto[indice]== ' '){ // Se acharmos um espaço.
			break; // Paramos o laço.
		}
	}
	inicio=indice+1; // Quando paramos o laço indice armazenava o valor do espaço. Precimos iniciar a busca de indice+1 para ignorar o espaço.
	// Exibindo o ultimo nome.
	for(inicio; inicio<termino; inicio++){ // Começando do lugar onde está o espaço mais um e indo até o indice menor que o delimitador.
		printf("%c", nomeCompleto[inicio]); // Imprimiremos char a char.
	}
	printf("\n"); // Uma nova linha no final.
}

void main(){
	char nomeCompleto[TAM];
	printf("Insira seu nome completo: ");
	gets(nomeCompleto);
	imprimeSobrenome(nomeCompleto);
}