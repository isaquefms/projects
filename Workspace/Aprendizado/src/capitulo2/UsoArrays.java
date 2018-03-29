package capitulo2;

import java.util.Arrays;
import java.util.Scanner;

public class UsoArrays {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Preparando o console para o ler a entrada de dados.
		System.out.print("No de elementos ? "); // Lê no de elementos.
		int tamanho = sc.nextInt();
		System.out.print("Valor real para o preenchimento ? "); // Lê o valor do preenchimento.
		double valor = sc.nextDouble();
		double arranjo1[] = new double[tamanho]; // Alocação de arranjo.
		Arrays.fill(arranjo1, valor); // Preenche o array com valor fixo.
		System.out.println(Arrays.toString(arranjo1)); // Exibição do arranjo.
		// Lê posições inicial e final da cópia.
		System.out.print("Posição inicial da copia ? ");
		int de = sc.nextInt();
		System.out.print("Posição final da copia ? ");
		int para = sc.nextInt();
		// Efetua cópia parcial e integral.
		double arranjo2[] = Arrays.copyOfRange(arranjo1, de, para);
		double arranjo3[] = Arrays.copyOf(arranjo1, arranjo1.length);
		// Exibe novos arrays.
		System.out.println("Copia parcial:\n" + Arrays.toString(arranjo2));
		System.out.println("Copia total:\n" + Arrays.toString(arranjo3));
		sc.close(); // Fecha console.
	}
}
