/*
* Implemente uma função que recebe um número inteiro “num” como parâmetro e
* retorna o primeiro número primo maior do que “num”. Exemplo: ao receber 8, a função
* retornará 11; ao receber 17, a função retornará 19. Você deve implementar uma função
* específica que retorna 1 se o número for primo e 0, caso contrário.
*/

#include <stdio.h>

// Função para verificar se o numero é primo
int numPrimo(int num){
	int cont=2, controle=0;
	if(num==2){ // Dois é um numero primo.
		return 1;
	}
	else if(num%2==0){ // Se o numero for par maior que 2 não é primo.
		return 0;
	}
	else{
		while(cont<num){ // Enquanto cont for menor que num o loop irá rodar.
			if(num%cont==0){
				controle=1; // Caso o numero possua algum divisor alem de 1.
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

int proximoNumeroPrimo(int n){
	int cont=n+1; // cont será iniciada com um numero acima da entrada;
	while(1){ // Laço eterno.
		if(numPrimo(cont)==1){ // Caso o numero sejá primo.
			break;
		}
		else{ // Caso contrario iremos para a proxima tentativa.
			cont++;
		}
	}
	return cont;
}

void main(){
	int n;
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	printf("O primeiro numero primo maior que %d eh %d\n", n, proximoNumeroPrimo(n));
}