#include <stdio.h>

main(){
	int cont = 1, soma = 0, num;
	while(cont <= 10){
		printf("Insira um numero inteiro: \n");
		scanf("%d", &num);
		soma = soma + num;
		cont++;
	}
	printf("A soma dos valores digitados: %d\n", soma);
	printf("A media dos valores digitados: %d",soma/10);
}
