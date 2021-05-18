# coding: utf-8

from fractions import Fraction
from math import factorial

n = int(input())
result = Fraction(1, 2)

for i in range(3, n + 1):
  if i & 1:
    result += Fraction(1, factorial(i))
    
  else:
    result -= Fraction(1, factorial(i))
    
print(1 - result)