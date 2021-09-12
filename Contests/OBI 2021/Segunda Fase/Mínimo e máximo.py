# coding: utf-8

s = int(input())
a, b = [int(input()) for i in range(2)]
smaller, bigger = float('inf'), 0

for i in range(a, b + 1):
  if sum(map(int, list(str(i)))) == s:
    smaller, bigger = min(smaller, i), max(bigger, i)
    
print(smaller)
print(bigger)