# -*- coding: utf-8 -*-

import statistics # Biblioteca básica para operações de estatística utilizando o Python.

data = [1,2,2,3,4,5,6,7,8,9,10] # Criando uma lista de elementos. Pode ser considerada um vetor.

# Exibindo elementos do vetor.
for elemento in data:
    print(elemento, end=" ") # O parâmetro end está informando que desejamos mostrar
                            # um espaço em branco após cada exibição de um número.

print() # Adicionei só para aprecer mais organizado.
print("Moda: ", end="")
print(statistics.mode(data)) # Fica isolado pois pode conter mais de um retorno.
print("Media: " + str(statistics.mean(data))) # str(alguma_coisa) transforma meu dado em um tipo string.
print("Media harmonica: " + str(statistics.harmonic_mean(data))) # O + junta uma string a outra
print("Mediana: " + str(statistics.median(data)))
print("Mediana baixa: " + str(statistics.median_low(data)))
print("Mediana alta: " + str(statistics.median_high(data)))
print("Mediana agrupada: " + str(statistics.median_grouped(data)))

### Fontes
# https://pythonprogramming.net/statistics-python-3-module-mean-standard-deviation/
