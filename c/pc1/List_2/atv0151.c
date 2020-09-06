/*
* Implemente uma função que retorna o valor do seguinte somatório:
* n
* sigma (5*i+2)
* i=3
* O valor de “n” será passado como parâmetro para função.
*/

#include <stdio.h>

int somatorio(int n){
	int cont, soma=0;
	for(cont=3; cont<=n; cont++){ // Loop com parametros exigidos pelo somatorio.
		soma = soma + ((5*cont)+2); // Execução do somatorio.
	}
	return soma;
}

void main(){
	int n;
	printf("Insira o valor de n do somatorio: ");
	scanf("%d", &n);
	printf("O valor do somatorio eh igual a: %d\n", somatorio(n));
}
