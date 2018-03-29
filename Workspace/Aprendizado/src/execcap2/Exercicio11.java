/**
 *  Escreva um programa que seja capaz de ler do console 31 valores reais cor-
 *  respondentes ao índice pluviométrico diário de um mês. Após a leitura, o 
 *  programa deve determinar o índice pluviométrico médio, o índice pluvio-
 *  métrico máximo e o dia de ocorrência.
 */

package execcap2;

import java.util.Scanner;

public class Exercicio11 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Preparando o console para leitura
		double indPluvi[] = new double [31]; // Array para armazenamento dos valores
		double somaVal = 0; // Variável para armazenamento 
		double maiorInd = 0; // Váriavel para armazenar o maior indice
		int diaMaiorInd = 0; // Variavel para armazenar o dia do maior indice
		for (int i=0; i<indPluvi.length; i++) { // For para caputurar os dados 
			System.out.printf("Informe o Indice Pluviometrico do dia %d :", i+1);
			indPluvi[i] = sc.nextDouble();
			somaVal += indPluvi[i];
			if (indPluvi[i] > maiorInd) {
				maiorInd = indPluvi[i];
				diaMaiorInd = i+1;
			}
		}
		System.out.println("O Indice Pluviometrico medio foi de : " + (somaVal / indPluvi.length));
		System.out.printf("O Maior Indice Pluviometrico foi de %f no dia %d. %n", maiorInd, diaMaiorInd);
		sc.close(); // Fechando o console para leitura
	}
}
