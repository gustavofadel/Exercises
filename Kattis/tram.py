# coding: utf-8

n = int(input())
differences = 0

for i in range(n):
  x, y = map(int, input().split())
  differences += y - x
  
print(differences / n)