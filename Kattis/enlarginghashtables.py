# coding: utf-8

from math import sqrt

def isPrime (n):
  if n < 2:
    return False
    
  if n < 4:
    return True
    
  if n % 2 == 0 or n % 3 == 0:
    return False
    
  if n < 25:
    return True
    
  for i in range(5, int(sqrt(n)) + 1):
    if n % i == 0 or n % (i + 2) == 0:
      return False
      
  return True
  
def nextPrime (n):
  while not isPrime(n):
    n += 2
    
  return n

while True:
  n = int(input())
  
  if n == 0:
    break
  
  if isPrime(n):
    print(nextPrime((n << 1) + 1))
    
  else:
    print(nextPrime((n << 1) + 1), '(%d is not prime)' % n)