# coding: utf-8

n = int(input())

for i in range(n):
  x = int(input())
  
  print(x, 'is even') if x % 2 == 0 else print(x, 'is odd')