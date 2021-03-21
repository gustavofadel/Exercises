# coding: utf-8

from math import log10
from sys import stdin, stdout

factorial = stdin.readline().strip()
length = len(factorial)

if length < 4:
  factorial = int(factorial)
  i = 2
  total = 1
  
  while total != factorial:
    total *= i
    i += 1
    
  stdout.write(str(i - 1) + '\n')

else:
  i = 2
  total = 0
  
  while total < length:
    total += log10(i)
    i += 1
    
  stdout.write(str(i - 2) + '\n')