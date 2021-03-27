# coding: utf-8

x, y = map(int, input().split())

if y == 1:
  print('ALL GOOD') if x == 0 else print('IMPOSSIBLE')
  
else:
  print(-x / (y - 1))