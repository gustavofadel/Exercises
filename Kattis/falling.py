# coding: utf-8

from math import sqrt

d = int(input())

for i in range(1, int(sqrt(d)) + 1):
  if d % i == 0:
    j = d // i
    
    if i & 1 == j & 1:
      print(abs(i - j) // 2, (i + j) // 2)
      exit()

print('impossible')