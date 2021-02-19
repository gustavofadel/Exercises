# coding: utf-8

atual, total = 1, 1
n = int(input())
g = sorted(map(int, input().split()))

for i in range(1, n):
  if g[i] > g[i-1]:
    atual += 1
  
  total += atual

print(total)