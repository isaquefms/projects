import java.util.Scanner;

public class TesteAgencia {
	public static void main(String[] args) {
		String nome, data;
		// Preparando o scanner;
		Scanner sc = new Scanner(System.in);
		System.out.println("Digite o nome do usuario: ");
		nome = sc.nextLine();
		System.out.println("Digite a data de nascimento: ");
		data = sc.nextLine();
		Pessoa p = new Pessoa(nome, data);
		Pessoa d = new Pessoa(nome, data);
		AgenciaBancaria ab = new AgenciaBancaria();
		ContaCorrente cc = new ContaCorrente(p, d, 1200.00);
		ab.addContaCorrente(cc);
		System.out.printf("Saldo Total da Agência: %d", ab.getTotalSaldo());
		sc.close();
	}
}
