# coding: utf-8

x = int(input())
factor = 2
points = 1

while factor * factor <= x:
  if x % factor == 0:
    x //= factor
    points += 1
    
  else:
    factor += 1
    
print(points)