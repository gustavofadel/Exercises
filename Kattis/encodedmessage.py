# coding: utf-8

from math import sqrt

for ct in range(int(input())):
  message = input()
  size = int(sqrt(len(message)))
  grid = [['' for j in range(size)] for i in range(size)]
  k = 0
  
  for i in range(size):
    for j in range(size):
      grid[i][j] = message[k]
      k += 1
  
  original = ''
  
  for j in range(size - 1, -1, -1):
    for i in range(size):
      original += grid[i][j]
      
  print(original)