# coding: utf-8

n, k = map(int, input().split())
r = [int(input()) for i in range(k)]
minimum = maximum = sum(r)

for i in range(n - k):
  minimum -= 3
  maximum += 3
  
print(minimum / n, maximum / n)