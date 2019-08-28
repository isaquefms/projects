# -*- coding: utf-8 -*-

# Imports de bibliotecas (recursos) para executar recursos diferentes.
import csv # Biblioteca utilizada para operar coma arquivos csv.

# Função para cálcular a média.
def media(total, n):
    return total/n

total = 0 # Declaração da variável para contar o total
n = 0 # Declaração de variável para contar a quantidade de elementos
flag = True # Variavel para eliminar a primeira linha

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


# Função para cálcular a média.
def media(total, n):
    return total/n
        
        