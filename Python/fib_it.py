# Programa para cálculo de um termo da sequência de Fibonacci utilizando uma iteração

n = int(input("Qual termo deseja ? ")) # Obtendo o termo.

def fib(n):
	i = 1
	f1 = 1
	f2 = 0
	fn = 1
	while i < n:
		# Cálculo do número atual.
		fn = f2 + f1
		f2 = f1
		f1 = fn
		i = i + 1
	return fn

print("O termo {} eh {}".format(n, fib(n)))