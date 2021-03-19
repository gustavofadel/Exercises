# coding: utf-8

l, h = map(int, input().split())
combinations = 0

for i in range(l, h + 1):
  frequency = [0 for i in range(10)]
  n = i
  
  while n > 0:
    digit = n % 10
    
    if digit == 0 or frequency[digit] > 0 or i % digit > 0:
      break
    
    frequency[digit] += 1
    n //= 10
    
  if n == 0:
    combinations += 1
    
print(combinations)