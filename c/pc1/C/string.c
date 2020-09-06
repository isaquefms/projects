// aula dia 27/04
#include <stdio.h>

void procuraCaracter(char v[], char caracter){
	int cont = 0, contAux = 0;
	for(cont; v[cont]!='\0'; cont++){
		if(caracter == v[cont]){
			contAux = cont;
			for(cont; v[cont]!='\0'; cont++){
				v[cont]=v[cont+1];
			}
			// Estou subitraindo 1 para que quando o loop for adicionar um no final ele volte ao indice da proxima letra
			// É importante lembrar que depois de analisar o valor na posição ele íŕa pular para o proximo valor não analisando
			// novamente a posição atual depois de mudar a posição dos caracteres. 
			cont = contAux-1;
		}
	}
}

void procuraTrecho(char v[], char trecho[]){
	int cont = 0, contAux = 0, armaCont = 0;
	for(cont; v[cont]!='\0'; cont++){
		if(v[cont] == trecho[contAux]){
			armaCont = cont;
			for(cont; v[cont]!='\0'; cont++){
				v[cont]=v[cont+1];
			}
			cont = armaCont-1;
			contAux++;
		}
	}
}

void main(){
	// char caracter;
	char palavra[100], trecho[10];
	printf("Insira uma palavra: ");
	gets(palavra);
	printf("Insira o trecho que deseja remover :");
	gets(trecho);
	procuraTrecho(palavra, trecho);
	// printf("Qual caracter deseja remover : ");
	// scanf("%c", &caracter);
	// procuraCaracter(palavra, caracter);
	printf("String Resultado: %s\n", palavra);
}
