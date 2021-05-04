# coding: utf-8

while True:
  try:
    k = int(input())
    
    while k > 0:
      x = k % 7
      k //= 7
      
      if x == 3:
        print(5, end = '')
      
      elif x == 4:
        print(9, end = '')
        
      elif x == 5:
        print(8, end = '')
        
      else:
        print(x, end = '')
        
    print()
      
  except EOFError:
    break