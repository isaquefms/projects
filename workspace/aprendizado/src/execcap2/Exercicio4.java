/**
 *  Construa um programa que efetue a leitura de um valor inteiro N, impri-
 *  mindo no console uma contagem de 0 ate N (inclusive);
 */

package execcap2;

import java.util.Scanner;

public class Exercicio4 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Prepara o console para leitura
		System.out.print("Digite um número inteiro : ");
		int n = sc.nextInt();
		for (int i=0; i<=n; i++) { // Contagem de O ate N
			System.out.println(i);
		}
		sc.close(); // Fechando o console
	}
}
