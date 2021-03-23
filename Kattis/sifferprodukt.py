# coding: utf-8

x = int(input())

while x >= 10:
  digits = [int(i) for i in str(x) if i != '0']
  product = 1
  
  for i in range(len(digits)):
    product *= digits[i]
    
  x = product
  
print(x)