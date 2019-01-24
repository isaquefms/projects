# Programa da sequencia de Fibbonaci utilizãndo recursão.

n = int(input("Qual termo deseja ? ")) # Obtenção do termo desejado.

def fib(n):
	if n == 0:
		return 0
	elif n == 1:
		return 1
	else
		return fib(n-1) + fib(n-2)

print("O termo {} eh {}".format(n, fib(n)))