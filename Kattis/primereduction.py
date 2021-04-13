# coding: utf-8

from functools import lru_cache

isPrime = [True for i in range(31622)]
isPrime[0] = isPrime[1] = False

for i in range(2, 31622):
  if isPrime[i]:
    for j in range(2 * i, 31622, i):
      isPrime[j] = False
      
primes = [x for x in range(2, 31622) if isPrime[x]]

@lru_cache(maxsize = None)
def reduction (n):
  factors = 0
  
  for p in primes:
    if p * p > n:
      break
    
    while n % p == 0:
      n //= p
      factors += p
      
  if factors == 0:
    return -1
    
  else:
    if n > 1:
      factors += n
      
    return factors

while True:
  n = int(input())
  
  if n == 4:
    break
  
  calls = 1
  value = reduction(n)
  
  while value != -1:
    n = value
    value = reduction(value)
    calls += 1
    
  print(n, calls)