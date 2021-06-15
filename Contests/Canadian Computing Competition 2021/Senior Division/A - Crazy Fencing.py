# coding: utf-8

n = int(input())
h, w = [list(map(int, input().split())) for i in range(2)]
area = 0

for i in range(n):
  area += (h[i] + h[i + 1]) * w[i] / 2
  
print('%.1f' % area)