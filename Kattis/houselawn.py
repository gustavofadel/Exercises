# coding: utf-8

l, m = map(int, input().split())
capable = list()
week = 60 * 24 * 7

for i in range(m):
  n, p, c, t, r = input().split(',')
  p, c, t, r = map(int, [p, c, t, r])
  size = week * c * t // (t + r)
  
  if size >= l:
    capable.append((p, i, n))

capable.sort()

print('\n'.join([n for p, i, n in capable if p == capable[0][0]]) if capable else 'no such mower')