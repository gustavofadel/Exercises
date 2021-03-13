# coding: utf-8

s, t, n = map(int, input().split())
d = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

for i in range(n):
  s += d[i]
  
  while s % c[i] != 0:
    s += 1
    
  s += b[i]
  
s += d[-1]

print('yes') if s <= t else print('no')