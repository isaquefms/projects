# Algoritmo para sorteio.
# Entrada a quantidade de nomes e os nomes.
# Saída os nomes já ordenados em pares.
# Lembrando que é necessário que seja uma quantidade par de pessoas.

# Quantidade de pessoas
n = int(input("Quantas pessoas deseja inserir: "))

# Inserindo os nomes
i=0
nomes = []
while i < n:
	tmp = input("Insira o "+str((i+1))+" nome :")
	nomes.append(tmp)
	i = i + 1

