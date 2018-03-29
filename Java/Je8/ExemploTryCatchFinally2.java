package capitulo2;

import java.io.*;

public class ExemploTryCatchFinally2 {
	public static void main(String args[]) {
		InputStream recurso = null;
		try {
			recurso = new FileInputStream(args[0]);
			// Uso do recurso
		} catch (IOException e1) {
			// Tratamento de erro na obtenção do recurso
			System.out.println(e1);
		} finally {
			if (recurso != null) try {
				recurso.close();
			} catch (IOException e2) {}
		}
	}
}
