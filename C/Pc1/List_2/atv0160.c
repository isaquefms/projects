/* 
* Implemente uma função que retorna o valor do seguinte somatório:
* n
* sigma (i!/i^i)
* i=3
* O valor de “n” será passado como parâmetro para função. Utilize as funções que calculam fatorial e
* potência, implementadas nos exercícios anteriores.
*/

#include <stdio.h>

float fatorial(int num){ // Para que o resultado sejá exibido mudamos de int para float.
	float fat=1; // fat irá iniciar com o fator neutro da multiplicação(1).
	if(num<0){ // Se o numero for menor que zero será retornado -1;
		return -1;
	}
	else if(num==0 || num==1){ // Caso o numero sejá igual a 0 ou 1 o fatorial é igual a 1.
		return 1;
	}
	else{ // Demais casos, numeros positivos maiores que 1.
		for(num; num>=1; num--){ // Iniciando pelo valor de num, até que sejá igual a 1.
			fat=fat*num;
		}
		return fat;
	}
}

int potencia(int base, int exp){
	int cont, pot=1; // Variaveis de contagem e armazenamento da potencia;
	if(exp==0){ // Toda base elecada a 0 é igual a 1.
		return 1;
	}
	else if(exp==1){ // Toda base elevada a 1 é igual a ela mesma.
		return base;
	}
	else{
		for(cont=1; cont<=exp; cont++){ // De 1 até o exp pot receberá o valor anterior multiplicado pela base.
			pot=pot*base;
		}
		return pot;	
	}
}

float somatorio(int n){
	float somatorio=0; // A divisão de dois inteiros pode não resultar em um numero inteiro.
	int cont;
	for(cont=3; cont<=n; cont++){
		somatorio=somatorio + (fatorial(cont)/potencia(cont, cont)); // Sequencia pedida no somatorio.
	}
	return somatorio;
}

void main(){
	int n;
	printf("Insira o valor máximo do somatorio: ");
	scanf("%d", &n);
	printf("O somatorio eh: %f\n", somatorio(n));
}