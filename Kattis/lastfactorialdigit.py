# coding: utf-8

from math import factorial

t = int(input())

for i in range(t):
  n = int(input())
  
  print(str(factorial(n))[-1])