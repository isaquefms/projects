/**
 *  Escreva um programa que leia N valores inteiros, em que N é determinado
 *  pelo usuário no início do programa. Os valores devem ser então apresenta-
 *  dos na ordem como foram fornecidos e, depois, reapresentados em ordem
 *  crescente. Finalmente, o programa deve indicar se a sequência inicial de 
 *  valores estava ou não em ordem crescente.
 */

package execcap2;

import java.util.Scanner;
import java.util.Arrays;

public class Exercicio15 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Preparando o console para leitura
		System.out.print("Quantos valores voce deseja inserir : ");
		int n = sc.nextInt();
		int arr1[] = new int [n]; // Declaração e alocação de array
		for (int i=0; i<arr1.length; i++) { // Captação de dados
			System.out.printf("Entre com o %do valor : ", i+1);
			arr1[i] = sc.nextInt();
		}
		for (int j=0; j<arr1.length; j++) { // Exibição de dados
			System.out.printf("%nO valor no indice [%d] eh %d.", j, arr1[j]);
		}
		int arr2[] = Arrays.copyOf(arr1, arr1.length); // Arr2 recebendo o array original
		Arrays.sort(arr2);
		System.out.println();
		System.out.println("Exibicao em ordem crescente...");
		for (int k=0; k<arr2.length; k++) { // Exibicao em ordem crescente
			System.out.printf("%nO valor no indice [%d] eh %d.", k, arr2[k]);
		}
		System.out.println();
		System.out.println("Comparação de Arrays...");
		if (Arrays.equals(arr1, arr2) == true) {
			System.out.println("Os valores iniciais estavam em ordem crescente.");
		} else {
			System.out.println("Os valores iniciais nao estavam em ordem crescente.");
		}
		sc.close();
	}
}
