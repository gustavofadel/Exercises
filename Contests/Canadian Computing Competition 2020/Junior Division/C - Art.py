# coding: utf-8

n = int(input())
upper, lower = [0, 0], [100, 100]

for i in range(n):
  x, y = map(int, input().split(','))
  upper = [max(upper[0], x), max(upper[1], y)]
  lower = [min(lower[0], x), min(lower[1], y)]
  
print('%d,%d\n%d,%d' % (lower[0] - 1, lower[1] - 1, upper[0] + 1, upper[1] + 1))