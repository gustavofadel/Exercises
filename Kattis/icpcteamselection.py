# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  a = sorted(map(int, input().split()))
  s = 0
  
  while len(a) > 0:
    a.pop(0)
    a.pop()
    s += a.pop()
    
  print(s)