import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
		Pessoa p = new Pessoa();
		Scanner sc = new Scanner(System.in);
		System.out.println("Insira o nome do usu�rio :");
		p.setNome(sc.nextLine());
		System.out.println("Insira a idade do usu�rio :");
		p.setIdade(sc.nextInt());
		System.out.println("Nome: "+p.getNome()+" Idade: "+p.getIdade());
		sc.close();
	}
}
