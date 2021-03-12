# coding: utf-8

s = int(input())

print('%d:' % s)

for i in range(2, s):
  if s % (i + (i - 1)) == 0 or s % (i + (i - 1)) == i:
    print('%d,%d' % (i, i - 1))
    
  if s % i == 0:
    print('%d,%d' % (i, i))