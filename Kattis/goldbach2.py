# coding: utf-8

isPrime = [True for i in range(32001)]
isPrime[0] = isPrime[1] = False

for i in range(2, 32001):
  if isPrime[i]:
    for j in range(i + i, 32001, i):
      isPrime[j] = False
      
for ct in range(int(input())):
  x = int(input())
  representations = list()
  
  for i in range(2, x // 2 + 1):
    if isPrime[i] and isPrime[x - i]:
      representations.append((i, x - i))
      
  print(x, 'has', len(representations), 'representation(s)')
  
  for first, second in representations:
    print(first, second, sep = '+')
    
  print()