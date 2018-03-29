/**
 *  Construa um programa que seja capaz de apresentar a soma de todos os
 *  argumetos inteiros ou reais recebidos. Argumentos invalidos devem ser
 *  desconsiderados sem provocar a exibição de erros ou excessões.
 */

package execcap2;

public class Exercicio7 {
	public static void main(String[] args) {
		int somaInt = 0; 
		double somaReal = 0; // somaTotal = 0;
		for (int i=0; i<args.length; i++) {
			try { // Verifica se o argumento é inteiro
				int n = Integer.parseInt(args[i]);
				somaInt += n;
			} catch (NumberFormatException e1) {
				// Se ocorrer exceção não é real
				try { // Verifica se o argumento é real
					double d = Double.parseDouble(args[i]);
					somaReal += d;
				} catch (NumberFormatException e2) {
					// O núemro não é inteiro nem real
					System.out.printf("O argumeto %d eh invalido %n", i+1);
				}
			}
		}
		// somaTotal = somaInt + somaReal;
		System.out.println("A soma total dos argumentos eh " + (somaInt + somaReal));
	}
}
