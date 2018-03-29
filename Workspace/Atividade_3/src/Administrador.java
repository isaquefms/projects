public class Administrador extends Empregado{
	
	private double ajudaCusto;
	
	public Administrador(String nome, String dataNascimento, double iRenda, double salarioBase, int numeroSecao, double ajudaCusto){
		super(nome, dataNascimento, iRenda, salarioBase, numeroSecao);
		this.ajudaCusto = ajudaCusto;
	}
	
	public double getAjudaCusto(){
		return ajudaCusto;
	}
	
	public void setAjudaCusto(double ajudaCusto){
		this.ajudaCusto = ajudaCusto;
	}
}
