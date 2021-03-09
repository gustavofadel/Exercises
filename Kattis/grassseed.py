# coding: utf-8

c = float(input())
l = int(input())
total = 0

for i in range(l):
  w, l = map(float, input().split())
  total += c * w * l
  
print('%.7f' % total)