public class Contato {
	
	// Campos da classe.
	private String nome;
	private int telefone;
	private String email;
	
	// Construtor default
	public Contato() {
		nome="Teste";
		telefone=00000000;
		email="vazio@vazio.com";
	}
	
	public Contato(String nome, int telefone, String email) {
		this.nome = nome;
		this.telefone = telefone;
		this.email = email;
	}
	
	// Getters and Setters
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome=nome;
	}
	
	public int getTelefone() {
		return telefone;
	}
	
	public void setTelefone(int telefone) {
		this.telefone = telefone;
	}
	
	public String getEmail() {
		return email;
	}
	
	public void setEmail(String email) {
		this.email=email;
	}
}
