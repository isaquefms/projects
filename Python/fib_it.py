# Programa para cálculo de um termo da sequência de Fibonacci utilizando uma iteração

n = int(input("Qual termo deseja ? ")) # Obtendo o termo.

def fib(n):
	if n == 0:
		return 0
	elif n == 1:
		return 1
	else
		i = 0, n1 = 1, n2 = 0, num = 0
		while i < n:
			# Cálculo do número atual.
			num = n1 + n2
			n1 = num
			n2 = n1
			i = i + 1
		return num

print("O termo {} eh {}".format(n, fib(n)))