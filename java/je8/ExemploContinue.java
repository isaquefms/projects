package capitulo2;

public class ExemploContinue {
	public static void main(String args[]) {
		int soma = 0; // Variável para armazenar a soma
		for (int i=0; i<=100; i++) { // Laço de 0 a 100
			// Abrevia a iteração se múltiplo de 2, 3, ou 5
			if (i%2==0 || i%3==0 || i%5==0) {
				System.out.println("i = " + i + " multiplo de 2, 3 ou 5");
				continue;
			}
			// Processamento normal para os demais casos
			soma = soma + i;
			System.out.println("i = " + i + " soma = " + soma);
		}
	}
}
