# coding: utf-8

from collections import defaultdict

n = int(input())
trips = defaultdict(list)

for i in range(n):
  s, y = input().split()
  trips[s].append(int(y))
  
for key, value in trips.items():
  value.sort()

q = int(input())

for i in range(q):
  s, k = input().split()
  print(trips[s][int(k) - 1])