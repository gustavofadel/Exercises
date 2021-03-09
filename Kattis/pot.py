# coding: utf-8

n = int(input())
x = 0

for i in range(n):
  p = input()
  x += int(p[:-1]) ** int(p[-1])
  
print(x)