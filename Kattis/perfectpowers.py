# coding: utf-8

from bisect import bisect
from math import copysign

primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]

def perfectPower (n):
  signal = int(n < 0)

  for i in range(signal, bisect(primes, n.bit_length())):
    value = copysign(round(pow(abs(n), 1 / primes[i])), n)
    
    if pow(value, primes[i]) == n:
      return primes[i] * perfectPower(int(value))
      
  return 1

while True:
  x = int(input())
  
  if x == 0:
    break
  
  print(perfectPower(x))