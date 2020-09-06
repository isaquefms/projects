/*
* Implemente uma função que recebe 2 números inteiros como parâmetro e retorna e a multiplicação
* desses números. A multiplicação não deve ser feita utilizando o operador “*”, em vez disso utilize
* apenas o operador de adição “+”. Implemente o programa principal para testar sua função.
*/

#include <stdio.h>

int multi(int n1, int n2){
	// Variavel como contadora e uma para acomular a multiplicação que será feita por soma.
	int cont, soma=0;
	for(cont = 1; cont<=n2; cont++){ // O loop será iniciado com o cont igual a 1 e irá rodar até que cont seja maior que n2. 
		soma = soma + n1; // A multiplicação irá somar n1, n2 vezes.
	}
	return soma;
}

void main(){
	int num1, num2;
	printf("Insira dois numeros inteiros: ");
	scanf("%d %d", &num1, &num2);
	printf("O resulta da multiplicacao de %d por %d eh %d\n", num1, num2, multi(num1, num2));
}