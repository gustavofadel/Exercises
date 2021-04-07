# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  engines = list()
  
  for i in range(n):
    a, b, c = map(int, input().split())
    r = b / (2 * a)
    t = a * r * r + b * r + c
    engines.append(t)
    
  print(engines.index(max(engines)) + 1)