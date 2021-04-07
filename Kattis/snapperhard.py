# coding: utf-8

for ct in range(1, int(input()) + 1):
  n, k = map(int, input().split())
  
  print('Case #%d:' % ct, 'ON') if n <= k and bin(k)[-n:] == '1' * n else print('Case #%d:' % ct, 'OFF')