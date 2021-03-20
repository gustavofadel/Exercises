# coding: utf-8

from math import sqrt

def isHappy (n):
  appeared = list()
  
  while n not in appeared:
    appeared.append(n)
    digits = list(str(n))
    n = 0
    
    for d in digits:
      n += int(d) * int(d)
  
  return n == 1

isPrime = [True for i in range(10001)]
primes = list()

isPrime[0] = isPrime[1] = False

for i in range(2, int(sqrt(10000)) + 1):
  if isPrime[i]:
    primes.append(i)
    
    for j in range(2 * i, 10001, i):
      isPrime[j] = False
  
for i in range(int(sqrt(10000)) + 1, 10001):
  if isPrime[i]:
    primes.append(i)
    
for ct in range(int(input())):
  k, m = map(int, input().split())
  
  print(k, m, 'YES' if isPrime[m] and isHappy(m) else 'NO')