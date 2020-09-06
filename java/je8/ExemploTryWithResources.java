package capitulo2;

import java.io.*;

public class ExemploTryWithResources {
	public static void main(String args[]) {
		try (InputStream recurso = new FileInputStream(args[0]); ) {
			// Uso do recurso
		} catch (IOException e1) {
			// Tratamento de erro na obtenção do recurso
			System.out.println(e1);
		}
	}
}
