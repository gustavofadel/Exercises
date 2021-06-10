# coding: utf-8

n, p = map(int, input().split())
scores = list(map(int, input().split()))

if p == 100:
  print('impossible')

else:
  while sum(scores) // len(scores) < p:
    scores.append(100)
    
  print(len(scores) - n)