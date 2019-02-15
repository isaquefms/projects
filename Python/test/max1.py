# Programa para descobrir e retornar o maior elemento
# de um vetor de elementos.

v = input("Insira a sequencia de valores inteiros: ").split()
for i in range(len(v)):
	v[i] = int(v[i]) # Conversão de strings para inteiros

def max(a, n):
	temp = a[0]
	i = 1
	for i in range(n):
		if(temp < a[i]):
			temp = a[i]
	return temp

print("Maior elemento: {}".format(max(v, len(v))))
