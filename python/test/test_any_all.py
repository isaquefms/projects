# Exemplo de uso da any e all
a = [True, False, False]
b = [False, False, False]
c = [True, True, True]

# listas
print('Listas:')
print(f'a: {a}')
print(f'b: {b}')
print(f'c: {c}')

# uso do any
print('')
print('Uso do any()')
print(f'Ha algum True em a: {any(a)}')
print(f'Ha algum True em b: {any(b)}')
print(f'Ha algum True em c: {any(c)}')

# uso do all
print('')
print('Uso do all()')
print(f'Todos sao True em a: {all(a)}')
print(f'Todos sao True em b: {all(b)}')
print(f'Todos sao True em c: {all(c)}')

# exemplo prático
print('')
a = [1, 2, None, 3]  # nova lista
print(f'Nova lista: {a}')
print(f'Ha algum None na lista: {any([element is None for element in a])}')