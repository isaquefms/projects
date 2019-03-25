### Código para plotar 3 funções em um único gráfico.
import matplotlib.pyplot as plt

# Armazenando os valores em variáveis.
# Em nosso caso esses valores representam a corrente em miliAmperes.
x = [0, 0.061, 0.104, 0.159, 0.209, 0.258, 0.308, 0.360, 0.408, 0.463, 0.516, 0.565, 0.616, 0.664, 0.710, 0.768, 0.818, 0.868, 0.914, 0.965, 1.014, 1.068, 1.114, 1.174, 1.216, 1.265, 1.323, 1.368, 1.420, 1.468, 1.527, 1.570, 1.621, 1.670, 1.722, 1.771, 1.822, 1.878, 1.932, 1.977, 2.029, 2.078, 2.133, 2.184, 2.232, 2.286, 2.333, 2.391, 2.441, 2.491, 2.545, 2.587, 2.643, 2.689, 2.747, 2.799, 2.845, 2.901, 2.946, 3.002, 3.051]

# Valores de potência variando em função da resistência usada.
yResNominal = [] # Potencial com a resistencia nominal.
yResMedido = [] # Potencial com a resistencia medida.
yResEstimado = [] # Potencial com a resistencia estimada.

# Criando as relações de correspondência.
for z in x:
	yResNominal.append(10*z)
	yResMedido.append(9.943*z)
	yResEstimado.append(9.856*z)

# Passando os parâmetros para combinação.
plt.plot(x,yResNominal, label="Nominal")
plt.plot(x,yResMedido, label="Medida")
plt.plot(x,yResEstimado, label="Estimada")

# Título do gráfico.
plt.title("Relação I X V")
# Alterando o label dos eixos.
plt.xlabel("I(mA)")
plt.ylabel("V(V)")
# Inserindo a legenda no melhor lugar.
plt.legend(loc='upper left')
# Exibindo o gráfico.
plt.show()