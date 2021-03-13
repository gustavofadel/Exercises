# coding: utf-8

n = int(input())
greatest = 0
t = [0 for i in range(n)]
d = [0 for i in range(n)]

for i in range(n):
  t[i], d[i] = map(int, input().split())
  
  if i > 0:
    greatest = max(greatest, (d[i] - d[i - 1]) // (t[i] - t[i - 1]))
    
print(greatest)