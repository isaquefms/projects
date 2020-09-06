#include <stdio.h>

#define N_STRINGS 3

void main(){
	char vetor[N_STRINGS][20] = {"Ola", "Antonio", "Susana"};
	char (*ptr)[20] = vetor; // Ponteiro para vetores de 20 chars.
	char *p;

	while(ptr-vetor<N_STRINGS){
		p = *ptr; // p recebe a string apontada por ptr.
		while(*p){
			putchar(*p++);
		}
		putchar('\n');
		ptr++;
	}
}