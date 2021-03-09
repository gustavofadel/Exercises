# coding: utf-8

n, w, h = map(int, input().split())

for i in range(n):
  length = int(input())
  
  print('DA') if w * w + h * h >= length * length else print('NE')