# coding: utf-8

n, c = map(int, input().split())
w = list(map(int, input().split()))
maximum = 0

for i in range(n):
  current = list()
  
  for j in range(i, n):
    if sum(current) + w[j] <= c:
      current.append(w[j])
      
    if sum(current) == c:
      break
    
  maximum = max(maximum, len(current))
  
print(maximum)