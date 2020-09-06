#include <stdio.h>
#include <stdlib.h>

int *preenche_w(int *q, int *r, int *num){
	int quantQ=12, quantR=20, i, j;
	int *w, cont=1, aux, nada;
	w=malloc(sizeof(int));
	for(i=0; i<quantQ; i++){
		for(j=0; j<quantR; j++){
			if(q[i]==r[j]){
				printf("%d\n", q[i]);
				w=realloc(w, cont*sizeof(int));
				w[cont-1]=q[i];
				cont++;
			}
		}
	}

	cont--;
	for(i=0; i<cont; i++){
		printf("%d\t", w[i]);
	}

	// Retirando elementos repetidos.
	for(i=0; i<cont; i++){
		for(j=i+1; j<cont; j++){
			if(w[i]==w[j]){
				aux=w[j];
				w[j]=w[cont-1];
				w[cont-1]=aux;
				cont--;
				w=realloc(w, cont*sizeof(int));
				j--;
			}
		}
	}

	*num=cont;
	//printf("%d\n", cont);
	return w;
}

int main(){
	FILE *arqv1;
	FILE *arqv2;
	FILE *arqv3;
	int *q, *r, i, *w, cont;
	q = malloc (12*sizeof(int));
	r = malloc (20*sizeof(int));
	arqv1=fopen("q.txt", "rb");
	arqv2=fopen("r.txt", "rb");
	arqv3=fopen("w.txt", "wb");
	if(arqv1==NULL || arqv2==NULL){
		printf("Erro ao abrir os arquivos!!\n");
		return 0;
	}
	i=0;
	while(fscanf(arqv1, "%d", &q[i])!=EOF){
		i++;
	}
	i=0;
	while(fscanf(arqv2, "%d", &r[i])!=EOF){
		i++;
	}
	//for(i=0; i<12; i++){
	//	printf("%d\t", q[i]);
	//}
	//printf("\n");
	//for(i=0; i<20; i++){
	//	printf("%d\t", r[i]);
	//}
	fclose(arqv1);
	fclose(arqv2);

	w=preenche_w(q, r, &cont);
	//printf("%d\n", cont);
	printf("\n");
	printf("\n");
	for(i=0; i<cont; i++){
		printf("%d\t", w[i]);
	}
	printf("\n");
	i=0;
	while(i<cont){
		fprintf(arqv3, "%d ", &w[i]);
		i++;
	}
}