# Algoritmo para verificar o menor multiplo que um numero desde que este
# contenha apenas os algarismos 0, 1 e 2.

# Entrada do numero
num = int(input("Insira um numero: "))

i = 1 # Contador de multiplos
execucao = True

while execucao:
	# Obtendo o algarismo e o resto do numero sem o algarismo.
	mult = i * num # Proximo multiplo.
	alg = mult % 10
	resto = int(mult / 10)
	# Enquanto o algarismo for menor que podemos continuar a verificacao.
	while alg <= 2:
		if resto > 0: # Caso o resto seja maior que zero devemos continuar a decomposicao.
			alg = resto % 10
			resto = int(resto / 10)
			if resto == 0: # Caso nessa operacao o resto seja zero
				if alg <= 2:
					print("O multiplo eh: "+str(mult))
					execucao = False
					break
				else:
					break
		else: # Caso o resto seja menor ou igual a 0 podemos devolver o numero.
			print("O multiplo eh: "+str(mult))
			execucao = False
			break
	# Caso não entre no laco podemos ir para o proximo caso.
	i = i + 1