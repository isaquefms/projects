/*
* Implemente o programa principal (main) e a função float VAL (float x, int n, float t) que recebe
* como parâmetro um valor x, uma taxa t e a quantidade de anos n. A função deve retornar o Valor
* Líquido Atual (VAL) calculado da seguinte maneira:
*	VAL= (x/(1+t)) + (x/(1+t)²) + (x/(1+t)³) + .... (x/(1+t)^n)
* O programa principal deve chamar a função VAL passando parâmetros de teste (ou seja, valores
* para x, n e t) e, em seguida, exibir o resultado. A função VAL deve chama a função que calcula
* potência, implementada no exercício anterior.
*/

#include <stdio.h>

// A função potencia foi feita no exercicio 0158, porém será necessario mudar a base para float pois t neste exercicio é float.
float potencia(float base, int exp){
	int cont;
	float pot=1; // Variaveis de contagem e armazenamento da potencia;
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

float val(float x, int n, float t){ // x é o valor, t a taxa e n a quantidade de anos.
	float val=0; // Variavel para guardar o valor de val.
	int cont;
	for(cont=1; cont<=n; cont++){
		val=val+(x/potencia(1+t, cont));
	}
	return val;
}

void main(){
	float x, t;
	int n;
	printf("Insira o valor: ");
	scanf("%f", &x);
	printf("Insira a quantidade de anos: ");
	scanf("%d", &n);
	printf("Insira o taxa: ");
	scanf("%f", &t);
	printf("Valor atual: %9.2f\n", val(x, n, t));
}