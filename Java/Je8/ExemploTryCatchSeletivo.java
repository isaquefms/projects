package capitulo2;

public class ExemploTryCatchSeletivo {
	public static void main(String args[]) {
		try { // Monitora eventuais problemas
			// Converte o 1o argumento em inteiro
			int j = Integer.parseInt(args[0]);
			while (j >= 0) {
				System.out.println(j);
				j--;
			}
		} catch (ArrayIndexOutOfBoundsException e1) {
			// Sinaliza a Falta de argumentos
			System.out.println("Não foi fornecido um argumento.");
		} catch (NumberFormatException e2) {
			// Sinaliza argumento inadequado
			System.out.println("Argumento nao e um inteiro.");
		}
	}
}
