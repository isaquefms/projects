public class Empregado extends Pessoa{
	
	// Atributos da classe Empregado.
	private int numeroSecao;
	private double salarioBase;
	private double iRenda;
	
	// Construtor da classe Empregado
	public Empregado(String nome, int rg, String dataNascimento, int numeroSecao, double salarioBase, double iRenda) {
		super(nome, rg, dataNascimento);
		this.numeroSecao = numeroSecao;
		this.salarioBase = salarioBase;
		this.iRenda = iRenda;
	}
	
	// Método que retornará o salário menos o desconto do imposto de renda.
	public double calcularSalario() {
		return salarioBase - (salarioBase*iRenda);
	}
	
	public int getNumeroSecao() {
		return numeroSecao;
	}
	
	public void setNumeroSecao(int numeroSecao) {
		this.numeroSecao = numeroSecao;
	}
	
	public double getSalarioBase() {
		return salarioBase;
	}
	
	public void setSalarioBase(double salarioBase) {
		this.salarioBase = salarioBase;
	}
	
	public double getIRenda() {
		return iRenda;
	}
	
	public void setIRenda(double iRenda) {
		this.iRenda = iRenda;
	}
}
