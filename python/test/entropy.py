# Calcular a entropia de um determinado conjunto de informações
from math import log2

values_p = input('Insira os valores de p separados por espaco: ')
values_p_on_list = values_p.split(' ')

# convertendo so valores de em float
values_p_float = [float(element) for element in values_p_on_list]

entropy: float = 0
for p in values_p_float:
	entropy += -1 * (p * log2(p))

# exibindo a entropia
print(f'Valor da entropia: {entropy:.3f}')