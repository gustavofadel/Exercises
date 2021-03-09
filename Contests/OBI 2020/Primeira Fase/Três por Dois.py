# coding: utf-8

n = int(input())
vet = [int(input()) for i in range(n)]
preco = 0

vet.sort(reverse=True)

for i in range(n):
  if i % 3 == 2:
    continue
  
  preco += vet[i]
  
print(preco)