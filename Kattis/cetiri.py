# coding: utf-8

a, b, c = map(int, input().split())

if a > b:
  a, b = b, a
  
if a > c:
  a, c = c, a
  
if b > c:
  b, c = c, b
  
if c - b == b - a:
  print(c + c - b)
  
elif c - b > b - a:
  print(b + b - a)
  
else:
  print(a + c - b)