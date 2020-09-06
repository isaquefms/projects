package capitulo2;

public class ExemploTryMultiCatch {
	public static void main(String args[]) {
		try { // Monitora eventuais problemas com multi-catch
			// Converte o primeiro argumento em inteiro.
			int j = Integer.parseInt(args[0]);
			while (j >= 0) {
				System.out.println(j);
				j--;
			}
		} catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
			// Sinaliza falta de argumento ou argumento inválido.
			System.out.println("Argumento nao fornecido ou invalido.");
		}
	}
}
