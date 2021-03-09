# coding: utf-8

n = int(input())
t = list(map(int, input().split()))
count = 0

for i in range(n):
  if t[i] < 0:
    count += 1
  
print(count)