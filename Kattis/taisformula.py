# coding: utf-8

n = int(input())
t = [0 for i in range(n)]
v = [0 for i in range(n)]
area = 0

for i in range(n):
  t[i], v[i] = map(float, input().split())
  
  if i > 0:
    area += (v[i] + v[i - 1]) / 2 * (t[i] - t[i - 1])
  
print(area / 1000)