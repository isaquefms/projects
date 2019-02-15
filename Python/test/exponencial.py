# Programinha com função recursiva
def mult(base, exp):
	total = base
	if(exp == 0):
		return 1
	elif(exp == 1):
		return base
	else:
		total = total * mult(base, exp-1)
		return total

base, exp = input("Digite a base e o expoente inteiros: ").split()
base = int(base)
exp = int(exp)
print("Resultado: " + str(mult(base, exp)))