import java.util.Scanner;

public class Teste {
	public static void main(String[] args) {
		Agenda a = new Agenda();
		Scanner sc = new Scanner(System.in);
		int i=1;
		while(i!=0) {
			// Precisamos iniciar o programa pedindo ao usuario que insira a opção desejada.
			System.out.println("======================");
			System.out.println("(1) - Inserir um novo contato");
			System.out.println("(2) - Exibir numero total de contatos");
			System.out.println("(3) - Exibir um contato (pesquisa pelo nome)");
			System.out.println("(4) - Excluir um contato (pesquisa pelo nome)");
			System.out.println("(5) - Exibir todos os contatos da agenda");
			System.out.println("(0) - Sair");
			i = sc.nextInt();
			sc.nextLine();
			if(i==1){
				Contato c = new Contato();
				System.out.println("Insira o nome :");
				c.setNome(sc.nextLine());
				System.out.println("Insira o telefone :");
				c.setTelefone(sc.nextInt());
				sc.nextLine();
				System.out.println("Insira o email :");
				c.setEmail(sc.nextLine());
				a.addContato(c);
			}else if(i==2){
				System.out.printf("Sua agenda possui %d Contatos..\n", a.quantContatos());
			}else if(i==3){
				String nome;
				System.out.println("Digite um nome :");
				nome = sc.nextLine();
				a.exibeContato(nome);
			}else if(i==4){
				String nome1;
				System.out.println("Digite um nome :");
				nome1 = sc.nextLine();
				a.excluirContato(nome1);
			}else if(i==5){
				a.exibeAgenda();
			}else if(i==0){
				sc.close();
				System.exit(0);
			}
		}
		sc.close();
	}
}
