# coding: utf-8

n = int(input())
k = list(map(int, input().split()))
expenses = 0

for i in range(n):
  if k[i] < 0:
    expenses += abs(k[i])
    
print(expenses)