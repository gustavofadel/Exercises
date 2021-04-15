# coding: utf-8

for ct in range(int(input())):
  n, e = map(int, input().split())
  
  for i in range(2, n + 1):
    if n % i == 0:
      n //= i
      q = i
      break
    
  i = 1
  t = (n - 1) * (q - 1)
  
  while True:
    x = (e * i - 1) % t
    
    if x == 0:
      print(i)
      break
    
    i += 1