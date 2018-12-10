# Import da biblioteca com o recurso de plotagem de gráficos.
import matplotlib.pyplot as plt

# Definição dos valores iniciais.
x = [1,2,3,4,5,6,7,8]
# y será uma lista com os valores finais.
y = []
# Criando os valores correspondentes.
for z in x:
	y.append(z ** 2)

# Passando os parâmetros para combinação.
plt.plot(x,y)
# Título do gráfico.
plt.title("Numeros ao quadrado.")
# Ativando a exibição do gráfico.
plt.show()