# coding: utf-8

for ct in range(int(input())):
  k, b, n = map(int, input().split())
  ssd = 0
  
  while n > 0:
    ssd += (n % b) * (n % b)
    n //= b
    
  print(k, ssd)