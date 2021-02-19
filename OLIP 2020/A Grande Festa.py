# coding: utf-8

d, p = map(int, input().split())
res = 1

for i in range(1, p):
  res *= (1 - i / d)

print('%.2f' % ((1 - res) * 100))