# coding: utf-8

n = int(input())
s = [1]

for i in range(n + 1):
  s.append(s[i] * (4 * i + 2) // (i + 2))
  
print(s[-1])