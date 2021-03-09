# coding: utf-8

n = int(input())
atbats = list(map(int, input().split()))
numerator = denominator = 0

for i in range(n):
  if atbats[i] != -1:
    numerator += atbats[i]
    denominator += 1

print(numerator / denominator)