# coding: utf-8

n, k = map(int, input().split())
crosses = 0
isPrime = [True for i in range(n + 1)]
isPrime[0] = isPrime[1] = False

for i in range(2, n + 1):
  if isPrime[i]:
    for j in range(i, n + 1, i):
      if isPrime[j]:
        isPrime[j] = False
        crosses += 1
        
        if crosses == k:
          print(j)
          exit()