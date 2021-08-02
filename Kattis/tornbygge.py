# coding: utf-8

n = int(input())
x = list(map(int, input().split()))
towers = 1

for i in range(1, n):
  towers += int(x[i] > x[i - 1])
  
print(towers)