/**
 *  É desejado um programa que seja capaz de imprimir no console o valor por
 *  extenso de um número inteiro recebido como argumento. O valor recebido
 *  deve estar dentro do intervalo [0, 49]. Valores maiores ou menores devem
 *  ser desconsiderados e uma mensagem apropriada deve ser exibida.
 */

package execcap2;

public class Exercicio10 {
	public static void main(String[] args) {
		if (args.length > 0) {
			switch (args[0]) {
			case "0": System.out.println("Zero");
				break;
			case "1": System.out.println("Um");
				break;
			case "2": System.out.println("Dois");
				break;
			case "3": System.out.println("Tres");
				break;
			case "4": System.out.println("Quatro");
				break;
			case "5": System.out.println("Cinco");
				break;
			case "6": System.out.println("Seis");
				break;
			case "7": System.out.println("Sete");
				break;
			case "8": System.out.println("Oito");
				break;
			case "9": System.out.println("Nove");
				break;
			case "10": System.out.println("Dez");
				break;
			case "11": System.out.println("Onze");
				break;
			case "12": System.out.println("Doze");
				break;
			case "13": System.out.println("Treze");
				break;
			case "14": System.out.println("Quatorze");
				break;
			case "15": System.out.println("Quinze");
				break;
			case "16": System.out.println("Dezessies");
				break;
			case "17": System.out.println("Dezessete");
				break;
			case "18": System.out.println("Dezoito");
				break;
			case "19": System.out.println("Dezenove");
				break;
			case "20": System.out.println("Vinte");
				break;
			case "21": System.out.println("Vinte e Um");
				break;
			case "22": System.out.println("Vinte e Dois");
				break;
			case "23": System.out.println("Vinte e Tres");
				break;
			case "24": System.out.println("Vinte e Quatro");
				break;
			case "25": System.out.println("Vinte e Cinco");
				break;
			case "26": System.out.println("Vinte e Seis");
				break;
			case "27": System.out.println("Vinte e Sete");
				break;
			case "28": System.out.println("Vinte e Oito");
				break;
			case "29": System.out.println("Vinte e Nove");
				break;
			case "30": System.out.println("Trinta");
				break;
			case "31": System.out.println("Trinta e Um");
				break;
			case "32": System.out.println("Trinta e Dois");
				break;
			case "33": System.out.println("Trinta e Tres");
				break;
			case "34": System.out.println("Trinta e Quatro");
				break;
			case "35": System.out.println("Trinta e Cinco");
				break;
			case "36": System.out.println("Trinta e Seis");
				break;
			case "37": System.out.println("Trinta e Sete");
				break;
			case "38": System.out.println("Trinta e Oito");
				break;
			case "39": System.out.println("Trinta e Nove");
				break;
			case "40": System.out.println("Quarenta");
				break;
			case "41": System.out.println("Quarenta e Um");
				break;
			case "42": System.out.println("Quarenta e Dois");
				break;
			case "43": System.out.println("Quarenta e Tres");
				break;
			case "44": System.out.println("Quarenta e Quatro");
				break;
			case "45": System.out.println("Quarenta e Cinco");
				break;
			case "46": System.out.println("Quarenta e Seis");
				break;
			case "47": System.out.println("Quarenta e Sete");
				break;
			case "48": System.out.println("Quarenta e Oito");
				break;
			case "49": System.out.println("Quarenta e Nove");
				break;					
			default: System.out.println("Argumento Invalido !!");
				break;
			}
		} else {
			System.out.println("Não foi informado argumento");
		}
	}
}
