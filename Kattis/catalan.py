# coding: utf-8

from math import factorial

q = int(input())

for i in range(q):
  x = int(input())
  
  print((factorial(2 * x) // (factorial(x) * factorial(x))) // (x + 1))