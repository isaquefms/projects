public class Empregado extends Pessoa{
	
	private double iRenda;
	private double salarioBase;
	private int numeroSecao;
	
	public Empregado(String nome, String dataNascimento, double iRenda, double salarioBase, int numeroSecao){
		super(nome, dataNascimento);
		this.iRenda = iRenda;
		this.salarioBase = salarioBase;
		this.numeroSecao = numeroSecao;
	}

	public double getiRenda() {
		return iRenda;
	}

	public void setiRenda(double iRenda) {
		this.iRenda = iRenda;
	}

	public double getSalarioBase() {
		return salarioBase;
	}

	public void setSalarioBase(double salarioBase) {
		this.salarioBase = salarioBase;
	}

	public int getNumeroSecao() {
		return numeroSecao;
	}

	public void setNumeroSecao(int numeroSecao) {
		this.numeroSecao = numeroSecao;
	}
}
