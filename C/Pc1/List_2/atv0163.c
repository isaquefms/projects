/*
* Implemente um procedimento para calcular e exibir o seguinte somatório:S = f(1) + f(2) + f(3) + ... + f(100).
* A função f(n) foi definida no exercício anterior.
* Resultado: 11363107
*/

// Por algum motivo eu não achei o resultado. Talvez esteja com algum erro a minha função menorMultiplo().

#include <stdio.h>

// Essa função executará até encontrar o valor.
int menorMultiplo(int n){
	int cont=1, multiplo, resto, controle=0;
	while(1){ // Laço eterno que irá calcular cada multiplo.
		multiplo = cont*n; // Calculo do numero multiplo.
		while(multiplo!=0){ // Laço que testará se o multiplo é realmente composto por digitos menores que 2.
			resto = multiplo%10; // Proximo valor de analise.
			if(resto>2){ // Caso o ultimo numero em comparação seja menor que 2 paramos o laço e vamos pro próximo multiplo.
				controle=1; // Se acharmos a diferença a variavel controle receberá 1.
				break;
			}
			else{ // Caso não seja analisaremos o próximo caso.
				multiplo = multiplo/10; // Multiplo dentro dese laço receberá outro valor.
				controle=0; // Enquanto controle for igual a 0 o numero testado estará correto.
			}
		}
		if(controle==0){ // Se o multiplo passou no teste acima então é o valor que precisamos.
			return cont*n; // Retornaremos o valor.
		}
		cont++; // Buscaremos pelo próximo multiplo.
	}
}

// Função com o somatório pedido.
void somatorio(){
	int somatorio=0, cont;
	for(cont=1; cont<=100; cont++){ // De cont igual a 1 enquanto cont for menor que 100.
		somatorio=somatorio+menorMultiplo(cont); // Somatorio chamando a função com o menor multiplo a cada mudança de cont.
	}
	printf("O valor do somatorio eh: %d\n", somatorio);
}

void main(){
	somatorio(); // Execução de somatorio() no main.
}