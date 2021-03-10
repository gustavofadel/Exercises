# coding: utf-8

n = int(input())

for i in range(n):
  b, p = map(float, input().split())
  bpm = 60 * b / p
  minimum = bpm - 60 / p
  maximum = bpm + 60 / p
  
  print('%.4f %.4f %.4f' % (minimum, bpm, maximum))