# coding: utf-8

l, n = map(int, input().split())
k = 1

while l % n != 0:
  k += 1
  n -= (l % n)
  
print(k)