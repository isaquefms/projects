/* 
* Implemente uma função que calcula e retorna a potência de um número. A função deve receber como
* parâmetro o número (base) e o expoente. Faça o cálculo da potência utilizando o operador de
* multiplicação (*).
*/

#include <stdio.h>

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

void main(){
	int base, exp;
	printf("Insira a base e o expoente: ");
	scanf("%d %d", &base, &exp);
	printf("(%d)^%d eh igual: %d\n", base, exp, potencia(base, exp));
}