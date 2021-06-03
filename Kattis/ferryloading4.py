# coding: utf-8

for case in range(int(input())):
  l, m = map(int, input().split())
  count = 0
  left = list()
  right = list()
  turn = 0
  
  for i in range(m):
    length, side = input().split()
    
    if side == 'left':
      left.append(int(length))
      
    else:
      right.append(int(length))
      
  while left or right:
    remaining = 100 * l
    
    if turn == 0:
      while left:
        if remaining - left[0] >= 0:
          remaining -= left.pop(0)
          
        else:
          break
        
    else:
      while right:
        if remaining - right[0] >= 0:
          remaining -= right.pop(0)
          
        else:
          break
    
    count += 1
    turn ^= 1
    
  print(count)