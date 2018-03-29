import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
		Pessoa p = new Pessoa();
		Scanner sc = new Scanner(System.in);
		System.out.println("Insira o nome do usuário :");
		p.setNome(sc.nextLine());
		System.out.println("Insira a idade do usuário :");
		p.setIdade(sc.nextInt());
		System.out.println("Nome: "+p.getNome()+" Idade: "+p.getIdade());
		sc.close();
	}
}
