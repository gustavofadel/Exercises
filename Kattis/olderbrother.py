# coding: utf-8

from math import sqrt

q = int(input())

if q == 1:
  print('no')
  
else:
  factors = list()
  
  while q % 2 == 0:
    factors.append(2)
    q >>= 1
    
  for i in range(3, int(sqrt(q)) + 2, 2):
    while q % i == 0:
      factors.append(i)
      q //= i
      
  if q != 1:
    factors.append(q)
    
  print('yes') if len(set(factors)) == 1 else print('no')