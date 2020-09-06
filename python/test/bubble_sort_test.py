### Algoritmo Bubble Sort
from random import randint

# Preenchendo o vetor que iremos ordenar
a = []
for i in range(50):
    a.append(randint(0,100))

# Ordenando
for i in range(len(a)):
    for j in range(len(a)-1):
        if(a[j] > a[j+1]):
            aux = a[j]
            a[j] = a[j+1]
            a[j+1] = aux

# Printando
for i in range(len(a)):
    print(a[i])
