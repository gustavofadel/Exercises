# coding: utf-8

for ct in range(int(input())):
  k, n = map(int, input().split())
  a = list()
  
  while len(a) < n:
    a.extend(list(map(int, input().split())))
  
  v = sorted(a.copy())
  j = 0
  
  for i in range(n):
    if a[i] == v[j]:
      j += 1
      
  print(k, n - j)