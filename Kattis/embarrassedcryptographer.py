# coding: utf-8

isPrime = [True for i in range(1000001)]
primes = list()

isPrime[0] = isPrime[1] = False

for i in range(2, 1000001):
  if isPrime[i]:
    primes.append(i)
    
    for j in range(i + i, 1000001, i):
      isPrime[j] = False
      
while True:
  k, l = map(int, input().split())
  
  if k == l == 0:
    break
  
  good = True
  
  for i in range(len(primes)):
    if primes[i] >= l:
      break
    
    if k % primes[i] == 0:
      print('BAD', primes[i])
      good = False
      break
    
  if good:
    print('GOOD')