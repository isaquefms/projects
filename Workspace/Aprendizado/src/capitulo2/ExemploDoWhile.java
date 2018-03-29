package capitulo2;

public class ExemploDoWhile {
	public static void main(String args[]) {
		// Converte 1° e 2° argumentos para inteiro
		int min = Integer.parseInt(args[0]), max = Integer.parseInt(args[1]);
		do {
			System.out.println(min + " < " + max);
			min++; max--;
		} while (min < max);
		System.out.println(min + " < " + max + " Condição Invalida !");
	}
}
