# coding: utf-8

n = int(input())
denominator = euler = 1

for i in range(1, n + 1):
  denominator *= i
  euler += 1 / denominator
  
print(euler)