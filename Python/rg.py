# Algoritmo para calcular o coeficiente do aluno segundo a regra do CEFET-MG

n = int(input("Quantas materias deseja inserir: "))

i = 0
somaNotas = 0
somaCarga = 0
while i < n:
	nota = float(input("Insira a nota da "+str(i+1)+" disciplina :"))
	cargaH = int (input("Insira a carga horaria da "+str(i+1)+" disciplina :"))
	somaNotas = somaNotas + (nota*cargaH)
	somaCarga = somaCarga + cargaH
	i = i + 1

print("Seu rendimento global eh de : {}".format(somaNotas/somaCarga))