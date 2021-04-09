# coding: utf-8

n, m = map(int, input().split())
t = sorted(map(int, input().split()), reverse = True)
l = sorted(map(int, input().split()), reverse = True)
i = j = 0

while i < n and j < m:
  if t[i] <= l[j]:
    i += 1
    j += 1
  
  else:
    i += 1
    
print(j)