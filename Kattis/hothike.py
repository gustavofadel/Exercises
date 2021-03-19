# coding: utf-8

length = int(input())
temperatures = list(map(int, input().split()))
day = 0
maximum = 50

for i in range(2, length):
  if max(temperatures[i], temperatures[i - 2]) < maximum:
    maximum = max(temperatures[i], temperatures[i - 2])
    day = i - 1
    
print(day, maximum)