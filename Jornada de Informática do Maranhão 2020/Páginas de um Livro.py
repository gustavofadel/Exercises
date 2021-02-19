# coding: utf-8

p = int(input())
res = 0

for i in range(1, p+1):
  res += len(str(i))

print(res)