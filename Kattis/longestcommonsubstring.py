# coding: utf-8

n = int(input())
a = [input() for i in range(n)]
l = 0

for i in range(len(a[0]), -1, -1):
  if i <= l:
    break
  
  for j in range(len(a[0]) - i + 1):
    s = a[0][j : i + j]
    
    if all([s in x for x in a]):
      l = i
      break

print(l)