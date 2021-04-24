# coding: utf-8

while True:
  n, b = map(int, input().split())
  
  if n == b == -1:
    break
  
  a = [int(input()) for i in range(n)]
  m = max(a)
  left = 1
  right = m
  
  while left < right:
    mid = (left + right) // 2
    d = sum([(a[i] + mid - 1) // mid for i in range(n)])
    
    if d > b:
      left = mid + 1
      
    else:
      right = mid
      
  print(left)
  
  input()