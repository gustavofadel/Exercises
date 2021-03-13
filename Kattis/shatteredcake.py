# coding: utf-8

w = int(input())
n = int(input())
area = 0

for i in range(n):
  piece = list(map(int, input().split()))
  area += piece[0] * piece[1]
  
print(area // w)