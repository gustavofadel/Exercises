# coding: utf-8

a, b, c = [int(input()) for i in range(3)]

if b - a < c - b:
  print(1)
  
elif b - a > c - b:
  print(-1)
  
else:
  print(0)