# coding: utf-8

def countWays (n):
  if n & 1 == 1:
    return 0
    
  elif n == 0:
    return 1
    
  elif n == 2:
    return 3
    
  else:
    return 4 * countWays(n - 2) - countWays(n - 4)
    
while True:
  n = int(input())
  
  if n == -1:
    break
  
  print(countWays(n))