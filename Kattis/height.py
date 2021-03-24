# coding: utf-8

p = int(input())

for k in range(1, p + 1):
  height = list(map(int, input().split()))[1:]
  count = 0
  
  for i in range(1, 20):
    value = height[i]
    j = i - 1
    
    while j >= 0 and height[j] > value:
      height[j + 1] = height[j]
      j -= 1
      count += 1
      
    height[j + 1] = value
    
  print(k, count)