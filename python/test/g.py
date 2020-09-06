# Lets bora. Programa simples para me ajudar a descobrir o erro médio em h e 
# t na função g = 2h/t^2
import math

t = input("Insira o valor de t: ")
t = float(t)
g = 9.8

h = (g*(t*t))/2
# t = math.sqrt((2*h)/g)
h = str(h)
print("Resultado: {}".format(h))