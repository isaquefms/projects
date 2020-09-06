/*
* Qual o menor número inteiro entre 1 e 10000 que possui a maior quantidades de divisores ?
* Quantos e quais são os divisores? Implemente um programa para encontrar a resposta. Exiba os Divisores.
*/
#include <stdio.h>

main(){
	int num = 1, cont = 1, numDivisoresLoop = 0, numDivisoresTotal = 0, numMaiorQuantDivisores;
	
	// Enquanto o num for menor igual a 10000.
	while(num <= 10000){
		// Reiniciando as variaveis a cada teste realizado.
		cont = 1;
		numDivisoresLoop = 0;
		// Enquanto a contadora for menor igual a 10000.
		while(cont <= 10000){
			// Se o numero for divisivel pelo cont adicionamos um ao numDivisores.
			if(num%cont == 0){
				numDivisoresLoop++;
			}
			cont++;
		}
		// Condicional de comparação caso o numero atual tenha superado o numero anterior.
		if(numDivisoresLoop > numDivisoresTotal){
			numDivisoresTotal = numDivisoresLoop;
			numMaiorQuantDivisores = num;
		}
		num++;
	}
	
	// Exibição de resultados após o Loop.
	printf("O numero entre 1 e 10000 com o maior numero de divisores eh: %d\n", numMaiorQuantDivisores);
	printf("O numero %d possui %d divisores!!\n", numMaiorQuantDivisores, numDivisoresTotal);
	printf("Seus Divisores sao: \n");

	// Reiniciando a variável cont.
	cont = 1;
	while(cont <= 10000){
		// Se cont for divisor de numMaiorQuantDivisores então o divisor será impresso.
		if(numMaiorQuantDivisores%cont == 0){
			printf("%d\n", cont);
		}
		cont++;
	}
}
