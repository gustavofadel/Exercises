# coding: utf-8

from sys import stdout
import io, os
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

factors = [0 for i in range(2000001)]
isPrime = [True for i in range(2000001)]
isPrime[0] = isPrime[1] = False

for i in range(2, 2000001):
  if isPrime[i]:
    for j in range(2 * i, 2000001, i):
      isPrime[j] = False
      
  else:
    for j in range(i, 2000001, i):
      factors[j] += 1

for i in range(int(input())):
  stdout.write(str(factors[int(input())] + 1) + '\n')