#include <stdio.h>

#define DIM 3
#define ESPACO ' '

// Iniciando o vetor com espaços vazios.
void inic(char s[][DIM]){
	int i,j;
	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			s[i][j]=ESPACO;
		}
	}
}

// Mostrando minha matriz.
void mostra(char s[DIM][DIM]){
	int i,j;
	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			printf("%c %c", s[i][j], j==DIM-1?' ':'|');
		}
		if(i!=DIM-1){
			printf("\n--------");
		}
		putchar('\n');
	}
}

// Função main.
void main(){
	char Velha[DIM][DIM];
	int posx, posy;
	char ch = '0'; // Caractere para jogar.
	int n_jogadas = 0;

	// Chamando a função inic.
	inic(Velha);
	while(1){ // Laço infinito.
		mostra(Velha); // Função para mostrar.
		printf("\nInsira a Posicao de Jogo Linha Coluna: ");
		scanf("%d %d", &posx,&posy);
		posx--; posy--; // Pois os indices dos vetores começam em 0.
		if(Velha[posx][posy]==ESPACO){ // Casa livre.
			Velha[posx][posy] = ch = (ch == '0')? 'X' : '0';
			n_jogadas++;
		}
		else{
			printf("Posicao ja ocupada\nJohue novamente !!!\n");
		}
		if(n_jogadas==DIM*DIM){
			break; // Acabamos com o programa.
		}
	}
	mostra(Velha);
}