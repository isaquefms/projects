/**
 *  Escreva um programa que efetue a leitura de um valor inteiro N determi-
 *  nando se ele é par ou impar.
 */

package execcap2;

import java.util.Scanner;

public class Exercicio5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Prepara o console para leitura
		System.out.print("Digite um numero inteiro : ");
		int n = sc.nextInt();
		if (n % 2 == 0) {
			System.out.printf("O numero %d eh par", n);
		} else {
			System.out.printf("O numero %d eh impar", n);
		}
		sc.close(); // Fechando o console.
	}
}
