# coding: utf-8

n = int(input())
res = 0

for i in range(n):
  t = input()
  res += int(t[:-1]) ** int(t[-1])
  
print(res)