# coding: utf-8

lower = 1
higher = 1000

while True:
  guess = (lower + higher) // 2
  
  print(guess)
  
  answer = input()
  
  if answer == 'correct':
    break
  
  elif answer == 'higher':
    lower = guess + 1
    
  else:
    higher = guess - 1