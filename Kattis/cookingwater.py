# coding: utf-8

n = int(input())
low, high = map(int, input().split())

for i in range(n - 1):
  a, b = map(int, input().split())
  low = max(low, a)
  high = min(high, b)
  
print('gunilla has a point') if low <= high else print('edward is right')