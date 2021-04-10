# coding: utf-8

n, v = map(int, input().split())
l, w, h = map(int, input().split())
largest = l * w * h - v

for i in range(n - 1):
  l, w, h = map(int, input().split())
  largest = max(largest, l * w * h - v)
  
print(largest)