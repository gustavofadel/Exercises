# coding: utf-8

while True:
  x, y = map(int, input().split())
  
  if x == y == 0:
    break
  
  if x + y == 13:
    print('Never speak again.')
    
  elif x > y:
    print('To the convention.')
    
  elif x == y:
    print('Undecided.')
    
  else:
    print('Left beehind.')