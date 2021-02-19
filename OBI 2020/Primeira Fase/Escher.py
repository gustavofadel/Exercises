# coding: utf-8

n = int(input())
vet = list(map(int, input().split()))
res = 'S'
soma = vet[0] + vet[-1]

for i in range(1, n - 1):
  if vet[i] + vet[n - i - 1] != soma:
    res = 'N'
    break
  
print(res)