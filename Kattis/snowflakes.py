# coding: utf-8

from collections import deque

for ct in range(int(input())):
  n = int(input())
  maximum = 0
  package = deque()
  snowflakes = set()
  
  for i in range(n):
    snowflake = int(input())
    
    if snowflake in snowflakes:
      while package[0] != snowflake:
        snowflakes.remove(package.popleft())
        
      package.popleft()
      package.append(snowflake)
      
    else:
      package.append(snowflake)
      snowflakes.add(snowflake)
      maximum = max(maximum, len(package))
      
  print(maximum)