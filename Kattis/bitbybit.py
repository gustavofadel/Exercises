# coding: utf-8

while True:
  n = int(input())
  
  if n == 0:
    break
  
  register = ['?' for i in range(32)]
  
  for i in range(n):
    instruction = input().split()
    
    if instruction[0] == 'CLEAR':
      x = 31 - int(instruction[1])
      register[x] = '0'
    
    elif instruction[0] == 'SET':
      x = 31 - int(instruction[1])
      register[x] = '1'
      
    elif instruction[0] == 'OR':
      x, y = 31 - int(instruction[1]), 31 - int(instruction[2])
      
      if register[x] == register[y] == '?':
        register[x] = '?'
        
      elif register[x] == '?' or register[y] == '?':
        register[x] = '1' if register[x] == '1' or register[y] == '1' else '?'
        
      else:
        register[x] = '1' if register[x] == '1' or register[y] == '1' else '0'
        
    else:
      x, y = 31 - int(instruction[1]), 31 - int(instruction[2])
      
      if register[x] == register[y] == '?':
        register[x] = '?'
        
      elif register[x] == '?' or register[y] == '?':
        register[x] = '0' if register[x] == '0' or register[y] == '0' else '?'
        
      else:
        register[x] = '1' if register[x] == '1' and register[y] == '1' else '0'
        
  print(''.join(register))