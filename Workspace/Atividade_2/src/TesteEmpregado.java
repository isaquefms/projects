import java.util.Scanner;

public class TesteEmpregado {
	public static void main(String[] args) {
		String nome, dataNascimento;
		int rg, numSecao;
		double salarioBase, iRenda, ajudaDeCusto;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("==========================================");
		System.out.println("Informe o nome do Empregado :");
		nome = sc.nextLine();
		System.out.println("Informe o numero do RG do Empregado :");
		rg = sc.nextInt();
		sc.nextLine();
		System.out.println("Informe a data de nascimento do Empregado :");
		dataNascimento = sc.nextLine();
		System.out.println("==========================================");
		System.out.println("Informe o número da seção do Empregado :");
		numSecao = sc.nextInt();
		System.out.println("Informe o salário base do Empregado: ");
		salarioBase = sc.nextDouble();
		System.out.println("Informe o percentual do desconto de IR do Empregado :");
		iRenda = sc.nextDouble();
		System.out.println("==========================================");
		System.out.println("Informe o valor da ajuda de custo do Administrador: ");
		ajudaDeCusto = sc.nextDouble();
		
		Empregado e = new Administrador(nome, rg, dataNascimento, numSecao, salarioBase, iRenda, ajudaDeCusto);
		System.out.printf("O salario liquido do Empregado eh %.2f:", e.calcularSalario());
		// Fechando o Scanner.
		sc.close();
	}
}
