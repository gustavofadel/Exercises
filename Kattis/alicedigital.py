# coding: utf-8

for ct in range(int(input())):
  n, m = map(int, input().split())
  a = list(map(int, input().split()))
  indices = list()
  weight = 0
  
  for i in range(n):
    if a[i] == m:
      indices.append(i)
      
  for i in indices:
    current = m
    
    for j in range(i - 1, -1, -1):
      if a[j] <= m:
        break
      
      current += a[j]
      
    for j in range(i + 1, n):
      if a[j] <= m:
        break
      
      current += a[j]
      
    weight = max(weight, current)
    
  print(weight)