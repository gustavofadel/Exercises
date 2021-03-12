# coding: utf-8

p = int(input())

for i in range(p):
  k, n = map(int, input().split())
  
  print(k, n * (n + 1) // 2 + n)