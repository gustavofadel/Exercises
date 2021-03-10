# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  x = sorted(map(int, input().split()))
  
  print(2 * (x[-1] - x[0]))