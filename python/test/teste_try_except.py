# Verificando o estado de variáveis durante o uso de um try/except
from typing import List

# lista que usaremos para teste
a: List[int] = []

try:
	a.append(1)
	raise Exception
except Exception:
	a: List[int] = []
	a.append(2)

print(f'Conteúdo de a: {a}')

# Concluímos com o teste que é necessário fazer o correto tratamento em variáveis
#	que armazenam dados como listas e dicionários ja que o lançamento da exceção
#	não faz com que a variável seja reiniciada.