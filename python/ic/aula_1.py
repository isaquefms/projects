# -*- coding: utf-8 -*-

# Imports de bibliotecas (recursos) para executar recursos diferentes.
import csv # Biblioteca utilizada para operar coma arquivos csv.

# Função para cálcular a média.
def media(total, n):
    return total/n

total = 0 # Declaração da variável para contar o total.
n = 0 # Declaração de variável para contar a quantidade de elementos.
flag = True # Variavel para eliminar a primeira linha.
lista = [] # Lista em python.

# Abertura de arquivo utilizando a cláusula with. Ela cuida do erro na abertura, garante o fechamento e cuida dos demais erros.
with open('../datasets/vgsales.csv', 'rt') as arq_teste:
    arq = csv.reader(arq_teste) # Lemos o arquivo no formato csv.
    for linha in arq: # Para cada linha no arquivo.
        if flag: # Na primeira entrada ele ignora a linha.
            flag = False
        else: # Nas demais ele executa a soma.
            n = n + 1 # Somando um em cada ocorrência.
            total = total + float(linha[6])
    print("Numero de elementos: {}".format(n)) # Exibindo o número de elementos.
    print(media(total, n))

    # Com o arquivo aberto iremos novamente iterar sobre ele com o intuito de obter a mediana.
    flag = True # Iremos novamente ignorar a primeira linha.
    for linha in arq:
        if flag:
            flag = False
        else:
            lista.append(linha[6]) # Adicionamos os valores na última posição da lista.
            # Lembrando que aqui estamos pegando os valores de vendas por ano.
    
    # Ao final teremos uma lista com todos os valores.
    lista.sort() # Ordenamos a lista de forma crescente.
    if (len(lista) % 2) == 0: # Caso a quantidade de elementos na lista seja par.
        i = int(len(lista) / 2) # Vamos pegar os valores intermediários para calcular a mediana.
        mediana = (lista[i-1] + lista[i]) / 2
        print("A mediana eh: {}".format(mediana))
    else: # Caso seja impar.
        i = int(len(lista) / 2) # A função int transforma o número retornado em um inteiro. Utiliza a função piso.
        mediana = lista[i]
        print("A mediana eh: {}".format(mediana))

