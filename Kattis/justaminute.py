# coding: utf-8

n = int(input())
totalDisplay = totalReal = 0

for i in range(n):
  m, s = map(int, input().split())
  totalDisplay += m
  totalReal += s
  
totalDisplay *= 60
average = totalReal / totalDisplay
  
print(average) if average > 1 else print('measurement error') 