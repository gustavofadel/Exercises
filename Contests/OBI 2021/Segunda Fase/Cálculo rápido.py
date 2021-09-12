# coding: utf-8

s = int(input())
a, b = [int(input()) for i in range(2)]
res = 0

for i in range(a, b + 1):
  if sum(map(int, list(str(i)))) == s:
    res += 1
    
print(res)