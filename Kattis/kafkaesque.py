# coding: utf-8

k = int(input())
numbers = [0] + [int(input()) for i in range(k)]
passes = 1

for i in range(1, k + 1):
  passes += int(numbers[i] < numbers[i - 1])
  
print(passes)