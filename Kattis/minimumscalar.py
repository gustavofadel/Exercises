# coding: utf-8

for ct in range(1, int(input()) + 1):
  n = int(input())
  v1 = sorted(map(int, input().split()))
  v2 = sorted(map(int, input().split()), reverse = True)
  product = 0
  
  for i in range(n):
    product += v1[i] * v2[i]
    
  print('Case #%d:' % ct, product)