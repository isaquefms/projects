#include <stdio.h>
#include <stdlib.h>

int multiplo(int n){
	int i=1, controle=0, multiplo, resto;
	while(1){
		multiplo = n*i;
		resto=multiplo%10;
		while(resto<=2){
			multiplo=multiplo/10;
			resto = multiplo%10;
			if(multiplo==0 && resto<=2){
				controle=1;
				break;
			}
		}
		if(controle==1){
			return n*i;
		}
		i++;
	}

}

void main(){
	int n;
	printf("Insira n: ");
	scanf("%d", &n);
	printf("f(%d)=%d\n", n, multiplo(n));
}