public class Pessoa {

	// Atributos da classe Pessoa.
	private String nome;
	private int rg;
	private String dataNascimento;
	
	// Construtor da classe.
	public Pessoa(String n, int numRG, String data) {
		nome = n;
		rg = numRG;
		dataNascimento = data;
	}
	
	// Método para converter os atributos em uma única String
	public String toString() {
		return "Nome:\t\t\t"+nome+"\nIdentidade:\t\t"+rg+"\nData nascimento:\t"+dataNascimento;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public int getRG() {
		return rg;
	}
	
	public void setRG(int rg) {
		this.rg = rg;
	}

	public String getDataNascimento() {
		return dataNascimento;
	}

	public void setDataNascimento(String dataNascimento) {
		this.dataNascimento = dataNascimento;
	}
	
}
