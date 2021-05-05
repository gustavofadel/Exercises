# coding: utf-8

from math import hypot

for case in range(int(input())):
  xa, ya = map(float, input().split())
  n = int(input())
  hasClose = False
  
  for i in range(n):
    xb, yb = map(float, input().split())
    
    if hypot(xa - xb, ya - yb) <= 8:
      hasClose = True
      
  print('light a candle' if hasClose else 'curse the darkness')