#include <stdio.h>

void main(){
	int x=5;
	int *ptr_x; // Ponteiro para x.
	int **ptr_ptr_x; // Ponteiro para o ponteiro de x.

	// Carga inicial dos ponteiros.
	ptr_x = &x;
	ptr_ptr_x = &ptr_x;

	printf("x = %d - &x = %ld\n", x, &x);
	printf("x = %d - &x = %ld\n", *ptr_x, ptr_x);
	printf("x = %d - &x = %ld\n", **ptr_ptr_x, *ptr_ptr_x);
}