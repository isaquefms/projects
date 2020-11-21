# total e soma
i: int = 100000
sum: int = 0

# efetuando e exibindo o cálculo de porcentagem
for _ in range(i+1):
    sum += 1
    print(f'Conclusao: {round((sum / i) * 100, 2)}', end='\r')
