/* 
* void calc(int *v, int num, int *xmin, int *xmax) que coloca nas posições de memoria aposntadas por xmin 
* e xmax o menor e o maior valor respectivamente existentes nos num primeiros elementos do vetor v.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void preencheVetor(int *v){
	int i;
	for(i=0; i<TAM; i++){
		v[i]=rand()%20;
	}
}

void calc(int *v, int num, int *xmin, int *xmax){
	int i, menor, maior;
	menor=maior=v[0];
	for(i=0; i<num; i++){
		if(v[i]>maior){
			maior=v[i];
		}
		if(v[i]<menor){
			menor=v[i];
		}
	}
	*xmin=menor;
	*xmax=maior;
}

void exibeVetorNum(int *v, int num){
	int i;
	for(i=0; i<num; i++){
		printf("%d", v[i]);
	}
}

void exibeVetor(int *v){
	int i;
	for(i=0; i<TAM; i++){
		printf("%d", v[i]);
	}
}

void main(){
	int *xmin, *xmax, num, v[TAM];
	srand(time(0));
	printf("Voce possui um vetor de %d elementos !!\n", TAM);
	printf("Quantos deseja ordernar: ");
	scanf("%d", &num);
	printf("\n\nExibindo o vetor por completo !!\n");
	exibeVetor(v);
	printf("\n\nExibindo os %d primeiros elementos !!\n", num);
	exibeVetorNum(v, num);
	calc(v, num, xmax, xmin);
	printf("Dentre os %d numeros do vetor o maior eh %d e o menor eh %d \n", num, *xmax, *xmin);
}

