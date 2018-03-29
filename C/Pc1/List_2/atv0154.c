/*
* Implemente a função “Primo” que recebe um número inteiro positivo como parâmetro e retorna 1
* caso o número seja primo e 0, caso contrário. Por definição, um número é primo quando é divisível
* somente por si próprio e por 1.
*/

#include <stdio.h>

int numPrimo(int num){
	int cont=2, controle=0;
	if(num == 2){ // Dois é um numero primo.
		return 1;
	}
	else if(num%2==0){ // Se o numero for par maior que 2 não é primo.
		return 0;
	}
	else{
		while(cont<num){ // Enquanto cont for menor que num o loop irá rodar.
			if(num%cont==0){
				controle=1; // Caso o numero possua algum divisor alem de 1 e ele mesmo;
				break;
			}
			cont++; // Incrementar cont a cada loop.
		}
		if(controle==1){ // Se o numero possuir algum divisor.
			return 0; // Não é primo.
		}
		else{
			return 1; // Caso não possua é primo.
		}	
	}
}

void main(){
	int num;
	printf("Insira um numero: ");
	scanf("%d", &num);
	if(numPrimo(num)==1){
		printf("Numero Primo !!\n");
	}else{
		printf("Numero Nao Primo !!\n");
	}
}