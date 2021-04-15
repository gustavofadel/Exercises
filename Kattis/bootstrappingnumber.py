# coding: utf-8

n = int(input())
epsilon = 10 ** -7
left = 0
right = n

while True:
  mid = left + (right - left) / 2
  power = n ** (1 / mid)
    
  if power + epsilon < mid:
    right = mid
  
  elif mid < power - epsilon:
    left = mid
  
  else:
    print(mid)
    break