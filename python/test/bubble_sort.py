# Bubble sort em python

n = int(input("Quantos numeros deseja inserir: ")) # Obtendo a quantidade de números.
numeros=[]
i=0

# Obtendo e inserindo os valores
while i < n:
	num = int(input("Insira o {} valor: ".format(i+1)))
	numeros.append(num)
	i = i + 1

# Ordenando a lista
i=0
while i < n:
	j=1
	while j < n:
		if numeros[j-1] >= numeros[j]: # Caso o número anterior seja maior que atual realizaremos a troca.
			aux = numeros[j]
			numeros[j] = numeros[j-1]
			numeros[j-1] = aux
		j=j+1 
	i=i+1

# Printando a lista ordenada
i=0
print()
print("Lista ordenada !!")
while i < n:
	print(numeros[i])
	i += 1