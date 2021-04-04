# coding: utf-8

p = int(input())
l = int(input())
adj = [list() for i in range(p + 1)]
idx = [0 for i in range(p + 1)]

for i in range(l):
  o, d = map(int, input().split())
  adj[d].append(o)
  idx[d] += 1
  
for i in range(1, p + 1):
  res = idx[i]
  
  for v in adj[i]:
    res += idx[v]
    
  print('%d: %d' % (i, res))