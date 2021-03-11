# coding: utf-8

e, f, c = map(int, input().split())
empty = e + f
sodas = 0

while empty >= c:
  empty -= c
  sodas += 1
  empty += 1
  
print(sodas)