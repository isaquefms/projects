public class Administrador extends Empregado{
	
	private double ajudaDeCusto;
	
	// Método construtor da classe.
	public Administrador(String nome, int rg, String dataNascimento, int numeroSecao, double salarioBase, double iRenda, double ajudaDeCusto) {
		super(nome, rg, dataNascimento, numeroSecao, salarioBase, iRenda);
		this.ajudaDeCusto = ajudaDeCusto;
	}
	
	public double getAjudaDeCusto() {
		return ajudaDeCusto;
	}
	
	public void setAjudaDeCusto(double ajudaDeCusto) {
		this.ajudaDeCusto = ajudaDeCusto;
	}
	
	// Reescrita do método calcularSalario()
	public double calcularSalario() {
		return (getSalarioBase() + ajudaDeCusto) - (getSalarioBase()*getIRenda());
	}
}
