# coding: utf-8

def recursion (i, w):
  global total
  
  if w < 200:
    if i == n:
      total -= w
      
    else:
      recursion(i + 1, w)
      recursion(i + 1, w + a[i])

n = int(input())
a = list(map(int, input().split()))
total = sum(a[i] * (1 << (n - 1)) for i in range(n))

recursion(0, 0)

print(total)