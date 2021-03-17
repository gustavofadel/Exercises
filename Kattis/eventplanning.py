# coding: utf-8

n, b, h, w = map(int, input().split())
cost = b + 1

for i in range(h):
  p = int(input())
  
  for a in list(map(int, input().split())):
    if a >= n and n * p < cost:
      cost = n * p
      
print(cost) if cost != b + 1 else print('stay home')