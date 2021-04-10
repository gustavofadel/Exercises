# coding: utf-8

from math import ceil

m = int(input())
cube = ceil(m ** (1 / 3))

if cube ** 3 > m:
  cube -= 1
  
best = -1
sums = set()

for i in range(1, cube + 1):
  for j in range(i, cube + 1):
    cubeSum = i ** 3 + j ** 3
    
    if cubeSum <= m:
      if cubeSum in sums:
        best = max(best, cubeSum)
        
      else:
        sums.add(cubeSum)
        
print(best) if best != -1 else print('none')