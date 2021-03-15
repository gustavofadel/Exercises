# coding: utf-8

def countSetBits (n):
  count = 0
  
  while n:
    count += n & 1
    n >>= 1
    
  return count

for ct in range(int(input())):
  x = input()
  maximum = 0
  
  for i in range(len(x)):
    maximum = max(maximum, countSetBits(int(x[:i + 1])))
    
  print(maximum)