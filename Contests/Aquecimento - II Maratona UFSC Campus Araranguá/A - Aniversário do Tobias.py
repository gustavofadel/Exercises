# coding: utf-8

from math import factorial
  
n = int(input())
qtd, baloes = dict(), 0

for i in range(n):
  s, b = input().split()
  
  try:
    qtd[s] += int(b)
    
  except KeyError:
    qtd[s] = int(b)
    
  baloes += int(b)

prod = 1

for i in qtd:
  prod *= factorial(qtd[i])

print('Feliz aniversario Tobias!')
print(factorial(baloes) // prod)