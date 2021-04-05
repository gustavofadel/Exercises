# coding: utf-8

d = dict()
n = int(input())
x = list(map(int, input().split()))

for i, v in enumerate(x):
  if v not in d:
    d[v] = i
    
  else:
    n = min(n, i - d[v])
    d[v] = i
    
print(n)