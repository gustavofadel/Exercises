# coding: utf-8

while True:
  numerator, denominator = map(int, input().split())
  
  if numerator == denominator == 0:
    break
  
  print(numerator // denominator, numerator % denominator, '/', denominator)