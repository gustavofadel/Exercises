# coding: utf-8

while True:
  try:
    n = int(input())
    digits = multiple = 1
    
    while multiple % n != 0:
      multiple = (10 * multiple + 1) % n
      digits += 1
      
    print(digits)
    
  except EOFError:
    break