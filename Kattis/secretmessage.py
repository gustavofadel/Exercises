# coding: utf-8

from math import ceil, sqrt

for ct in range(int(input())):
  message = input()
  l = len(message)
  k = ceil(sqrt(l))
  m = k * k
  message += '*' * (m - l)
  grid = [['' for j in range(k)] for i in range(k)]
  index = 0
  
  for i in range(k):
    for j in range(k):
      grid[i][j] = message[index]
      index += 1
  
  secret = ''
  
  for j in range(k):
    for i in range(k - 1, -1, -1):
      if grid[i][j] != '*':
        secret += grid[i][j]
        
  print(secret)