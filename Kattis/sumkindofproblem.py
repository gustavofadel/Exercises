# coding: utf-8

p = int(input())

for i in range(p):
  k, n = map(int, input().split())
  positive = n * (2 + (n - 1)) // 2
  odd = n * (2 + 2 * (n - 1)) // 2
  even = n * (4 + 2 * (n - 1)) // 2
  
  print(k, positive, odd, even)