# coding: utf-8

n = int(input())
a = list(map(int, input().split()))
needed = 1
possible = False
longEdge = 2 ** (-3 / 4)
shortEdge = 2 ** (-5 / 4)
total = 0

for i in range(n - 1):
  total += needed * longEdge
  longEdge, shortEdge = shortEdge, longEdge
  shortEdge /= 2
  needed = 2 * needed - a[i]
  
  if needed <= 0:
    possible = True
    break

print(total) if possible else print('impossible')