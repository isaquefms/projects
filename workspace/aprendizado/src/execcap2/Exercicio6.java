/**
 *  Dado um terreno retangular, do qual são conhecidos sua largura e seu
 *  comprimento, esreva um programa que calcule e exiba os valores de seu
 *  perímetro e sua área.
 */

package execcap2;

public class Exercicio6 {
	public static void main(String[] args) {
		int largu = 15;
		int compr = 20;
		double perim = (largu * 2) + (compr * 2);
		double area = (largu * compr);
		System.out.printf("O terreno possui o perimetro de %f metros.%n", perim);
		System.out.printf("O terreno possui a area de %f metros quadrados.", area);
	}
}
