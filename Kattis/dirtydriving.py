# coding: utf-8

n, p = map(int, input().split())
distances = sorted(map(int, input().split()))
minimumDistance = 0

for i in range(n):
  minimumDistance = max(minimumDistance, p * (i + 1) - distances[i])
  
print(minimumDistance + distances[0])