# coding: utf-8

from math import sqrt

n = int(input())

if n == 1:
  print(0)
  
else:
  for i in range(2, int(sqrt(n)) + 1):
    if n % i == 0:
      print(n - (n // i))
      exit()
      
  print(n - 1)