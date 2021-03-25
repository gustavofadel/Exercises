# coding: utf-8

n = int(input())
probabilities = list()

for i in range(n):
  password, probability = input().split()
  probabilities.append(float(probability))
  
probabilities.sort(reverse = True)
expected = 0

for i in range(1, n + 1):
  expected += probabilities[i - 1] * i
  
print(expected)