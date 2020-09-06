/**
 *  Escreva um programa que efetue a leitura de um valor inteiro N determinan-
 *  do seu fatorial.
 */

package execcap2;

import java.util.Scanner;

public class Exercicio13 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Preparando o console para leitura
		int fat = 1;
		System.out.print("Digite um numero inteiro : ");
		int n = sc.nextInt();
		int numExib = n; // Variavel para exibição do valor
		while (n >= 1) {
			fat = fat * n;
			n--;
		}
		System.out.printf("O fatorial de %d eh : %d", numExib, fat);
		sc.close(); // Fechando o terminal para leitura
	}
}
