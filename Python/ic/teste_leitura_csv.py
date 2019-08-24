import csv # Biblioteca utilizada para operar com arquivos csv.

# A função open é responsável por abrir o arquivo. As opções 'rt' significam leitura do arquivo em modo texto.
with open('teste.csv', 'rt') as arq_teste: # Essa linha garante a execução correta da leitura.
    leitura = csv.reader(arq_teste) # Leitura do arquivo.
    for linha in leitura: # Laço for simples. Obtendo cada linha do que foi lido.
        print(linha) # Vamos mostrar no console a linha lida.
                     # Cada linha é um vetor onde cada coluna é um elemento.

## Referências
# Função open: https://www.w3schools.com/python/ref_func_open.asp
# with: https://www.geeksforgeeks.org/with-statement-in-python/
