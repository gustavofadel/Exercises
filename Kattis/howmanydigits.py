# coding: utf-8

from math import e, floor, log10, pi

while True:
  try:
    number = int(input())
    
    if number < 2:
      digits = 1
      
    else:
      kamenetsky = ((number * log10(number / e) + log10(2 * pi * number) / 2))
      digits = floor(kamenetsky) + 1
      
    print(digits)
    
  except EOFError:
    break