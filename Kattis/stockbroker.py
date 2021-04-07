# coding: utf-8

d = int(input())
previous = int(input())
amount = 100

for i in range(d - 1):
  current = int(input())
  
  if current > previous:
    amount += min(amount // previous, 100000) * (current - previous)
    
  previous = current

print(amount)