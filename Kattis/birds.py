# coding: utf-8

l, d, n = map(int, input().split())
birds = sorted([int(input()) for i in range(n)])
additional = 0
current = 6

if n == 0:
  additional += (l - 12) // d + 1
  
else:
  for i in range(n):
    while birds[i] - current >= d:
      current += d
      additional += 1
      
    current = birds[i] + d
    
  while current <= l - 6:
    current += d
    additional += 1
    
print(additional)