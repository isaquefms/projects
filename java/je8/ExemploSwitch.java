package capitulo2;

public class ExemploSwitch {
	public static void main(String args[]) {
		if (args.length > 0) { // Testa a presença de argumentos
			switch (args[0].charAt(0)) { // Avalia a inicial do 1o argumeto
				case 'a': // Argumento com inicial a maiúscula ou minúscula
				case 'A': System.out.println("Vogal A");	
					break;
				case 'e':
				case 'E': System.out.println("Vogal E");
					break;
				case 'i':
				case 'I': System.out.println("Vogal I");
					break;
				case 'o':
				case 'O': System.out.println("Vogal O");
					break;
				case 'u':
				case 'U': System.out.println("Vogal U");
					break;
				default: // Inicial não pe uma vogal
					System.out.println("Não é uma vogal.");
			}
		} else {
			System.out.println("Não foi fornecido nenhum argumento.");
		}
	}
}
