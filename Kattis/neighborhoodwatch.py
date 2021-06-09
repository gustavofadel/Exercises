# coding: utf-8

n, k = map(int, input().split())
houses = [0] + [int(input()) for i in range(k)] + [n + 1]
safety = n * (n + 1) // 2

for i in range(1, len(houses)):
  difference = houses[i] - houses[i - 1] - 1
  safety -= difference * (difference + 1) // 2
  
print(safety)