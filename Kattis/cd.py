# coding: utf-8

from sys import stdin, stdout

while True:
  n, m = map(int, stdin.readline().strip().split())
  
  if n == m == 0:
    break
  
  jack = [int(stdin.readline().strip()) for i in range(n)]
  jill = [int(stdin.readline().strip()) for i in range(m)]
  both = j = 0
  
  for i in range(m):
    while j < n and jack[j] <= jill[i]:
      if jack[j] == jill[i]:
        both += 1
        
      j += 1
  
  stdout.write(str(both) + '\n')