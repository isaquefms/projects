package capitulo2;

public class Matriz {
	public static void main(String[] args) {
		double m[][] = new double[3][4]; // Declara e aloca matriz 3x4
		for (int l=0; l<m.length; l++) { // Preenche matriz
			for (int c=0; c<m[l].length; c++) {
				m[l][c] = l*m[l].length + c;
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
