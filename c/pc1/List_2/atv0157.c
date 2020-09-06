/*
* Implemente uma função que retorna o valor do seguinte somatório:
* n
* sigma(i!)
* i=3
* O valor de “n” será passado como parâmetro para função. Utilize a função fatorial implementada no
* exercício anterior.
*/

#include <stdio.h>

int fatorial(int num){
	int fat=1; // fat irá iniciar com o fator neutro da multiplicação(1).
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

int somatorio(int n){
	int somatorio=0, i; // Variavel para o armazenamento de somatorio e i.
	for(i=3; i<=n; i++){ // De i==3 até i==n.
		somatorio = somatorio + fatorial(i);
	}
	return somatorio;
}

void main(){
	int n;
	printf("Insira o valor de n: ");
	scanf("%d", &n);
	printf("O Somatorio de i=3 ate %d executando (i!) eh: %d\n", n, somatorio(n));
}