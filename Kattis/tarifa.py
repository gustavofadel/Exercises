# coding: utf-8

x = int(input())
n = int(input())
p = [int(input()) for i in range(n)]
available = x

for i in range(n):
  available += x - p[i]
  
print(available)