# coding: utf-8

n, x = map(int, input().split())
prices = sorted(map(int, input().split()))
items = 1

for i in range(1, n):
  if prices[i] + prices[i - 1] <= x:
    items = i + 1
    
print(items)