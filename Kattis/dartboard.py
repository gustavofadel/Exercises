# coding: utf-8

from math import exp

scores = [50, 25, 10.5, 31.5, 10.5, 21]
radius = [0] + list(map(float, input().split()))
sigma = float(input())
expectedScore = 0

for i, score in enumerate(scores):
  expectedScore += score * (exp(-radius[i] * radius[i] / (2 * sigma * sigma)) - exp(-radius[i + 1] * radius[i + 1] / (2 * sigma * sigma)))
  
print(expectedScore)