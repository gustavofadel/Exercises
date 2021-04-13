# coding: utf-8

n, m, a, c, x0 = map(int, input().split())
count = 0
v = list()

for i in range(n):
  x0 = (a * x0 + c) % m
  v.append(x0)

for x in v:
  low = 0
  high = n - 1
  
  while low <= high:
    mid = (low + high) // 2
    
    if v[mid] > x:
      high = mid - 1
      
    elif v[mid] == x:
      count += 1
      break
    
    else:
      low = mid + 1
      
print(count)