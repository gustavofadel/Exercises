# coding: utf-8

n = int(input())
m = [list(map(int, input().split())) for i in range(n)]
a = [0 for i in range(n)]

for i in range(n):
  for j in range(n):
    a[i] |= m[i][j]
    
print(*a, sep = ' ')