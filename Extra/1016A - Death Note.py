# coding: utf-8
 
n, m = map(int, input().split())
a = list(map(int, input().split()))
count = 0 
 
for i in range(n):
  count += a[i]
  print(count // m, end = ' ')
  count %= m