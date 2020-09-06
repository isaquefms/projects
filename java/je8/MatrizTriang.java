package capitulo2;

public class MatrizTriang {
	public static void main(String[] args) {
		double m[][]; // Declara matriz
		m = new double[4][]; // Aloca matriz parcialmente
		int aux = 0; // Variável auxiliar
		for (int l=0; l<m.length; l++) {
			m[l] = new double[l+1]; // Completa alocação
			for (int c=0; c<m[l].length; c++) { // Preenche matriz
				m[l][c] = aux ++;
			}
		}
		for (int l=0; l<m.length; l++) { // Exibe matriz
			for (int c=0; c<m[l].length; c++) {
				System.out.print(m[l][c] + "\t");
			}
			System.out.println();
		}
	}
}
