# coding: utf-8

from math import factorial

t = int(input())

for i in range(1, t + 1):
  n, k, x = map(int, input().split())
  p = 1
  
  for j in range(k):
    p *= (x / 100)
    
  for j in range(n - k):
    p *= (1 - (x / 100))
    
  p *= (factorial(n) / (factorial(k) * factorial(n - k)))
  
  print('A chance de Basy acertar o numero no dia %d eh %.2f%%' % (i, p * 100))