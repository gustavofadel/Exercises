# coding: utf-8

n = int(input())
t = sorted(map(int, input().split()), reverse = True)
day = 0

for i in range(2, n + 2):
  day = max(day, t[i - 2] + i)
  
print(day)