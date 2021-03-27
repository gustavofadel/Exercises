# coding: utf-8

n = int(input())

if n % 2 == 1:
  print('Either')
  
elif n % 2 == 0 and n % 4 == 0:
  print('Even')
  
else:
  print('Odd')