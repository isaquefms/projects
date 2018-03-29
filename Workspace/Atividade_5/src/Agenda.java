import java.util.ArrayList;

public class Agenda {
	// Campos da classe
	private ArrayList<Contato> contatos;

	// Metodo default
	public Agenda() {
		contatos = new ArrayList<Contato>();
	}

	// Getters and Setters
	public ArrayList<Contato> getContatos(){
		return contatos;
	}

	public void setContatos(ArrayList<Contato> contatos) {
		this.contatos=contatos;
	}

	// Metodos da classe
	// Inserir contato.
	public void addContato(String nome, int telefone, String email) {
		Contato ct = new Contato(nome, telefone, email);
		contatos.add(ct);
	}

	public void addContato(Contato c){
		contatos.add(c);
	}

	// Exibindo o número de contatos.
	public int quantContatos(){
		return contatos.size();
	}

	// Excluir contato
	public void excluirContato(String nome){
		// For aprimorado.
		for(Contato c : contatos){
			// Se o nome do contato atual for igual ao come passado.
			if(c.getNome().equals(nome)){
				// Excluimos o objeto.
				contatos.remove(c);
			}
		}
	}

	// Exibir um unico contato.
	public void exibeContato(String nome){
		for(Contato c : contatos){
			if(c.getNome().equals(nome)){
				System.out.printf("Contato %s ..\n", nome);
				System.out.println(c.getNome());
				System.out.println(c.getTelefone());
				System.out.println(c.getEmail());
			}
		}
	}

	// Exibir contatos.
	public void exibeAgenda() {
		for(Contato c : contatos) {
			System.out.println("===============");
			System.out.println(c.getNome());
			System.out.println(c.getTelefone());
			System.out.println(c.getEmail());
			System.out.println();
		}
	}
}
