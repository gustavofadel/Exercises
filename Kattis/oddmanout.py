# coding: utf-8

for ct in range(1, int(input()) + 1):
  g = int(input())
  c = list(map(int, input().split()))
  alone = 0
  
  for i in range(g):
    alone ^= c[i]
    
  print('Case #%d: %d' % (ct, alone))