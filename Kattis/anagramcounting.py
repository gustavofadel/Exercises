# coding: utf-8

from math import factorial

while True:
  try:
    word = input()
    unique = set(word)
    numerator = factorial(len(word))
    denominator = 1
    
    for letter in unique:
      denominator *= factorial(word.count(letter))
      
    print(numerator // denominator)
    
  except EOFError:
    break