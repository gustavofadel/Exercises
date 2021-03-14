# coding: utf-8

n, q = map(int, input().split())
x = list(map(int, input().split()))

for i in range(q):
  operation, a, b = map(int, input().split())
  
  if operation == 1:
    x[a - 1] = b
    
  else:
    print(abs(x[a - 1] - x[b - 1]))