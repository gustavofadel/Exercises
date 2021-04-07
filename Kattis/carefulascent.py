# coding: utf-8

x, y = map(int, input().split())
n = int(input())
t = 0

for i in range(n):
  l, u, f = map(float, input().split())
  t += (u - l) * f
  y -= (u - l)
  
print(x / (t + y))