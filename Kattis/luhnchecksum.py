# coding: utf-8

for ct in range(int(input())):
  number = input()[::-1]
  total = 0
  
  for i in range(len(number)):
    digit = int(number[i])
    
    if i % 2 == 1:
      digit *= 2
      
    if digit >= 10:
      digit = (digit // 10) + (digit % 10)
      
    total += digit
    
  print('PASS') if total % 10 == 0 else print('FAIL')