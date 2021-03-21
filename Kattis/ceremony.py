# coding: utf-8

n = int(input())
h = sorted(map(int, input().split()), reverse = True)
charges = n

for i in range(1, n):
  charges = min(charges, i + h[i])
  
print(charges)