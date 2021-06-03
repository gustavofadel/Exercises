# coding: utf-8

n = int(input())
maxZeros = 0
minBase = 2

for base in range(n, 1, -1):
  auxiliary = n
  zeros = 0
  
  while auxiliary % base == 0:
    auxiliary //= base
    zeros += 1
    
  if zeros >= maxZeros:
    maxZeros = zeros
    minBase = base
    
print(minBase)