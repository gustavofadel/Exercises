# coding: utf-8

c = int(input())
maior = soma = 100

for i in range(c):
  v = int(input())
  soma += v
  maior = max(maior, soma)
  
print(maior)