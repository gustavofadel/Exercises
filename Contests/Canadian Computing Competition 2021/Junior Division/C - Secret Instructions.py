# coding: utf-8

while True:
  instruction = input()
  
  if instruction == '99999':
    break
  
  direction = sum(map(int, instruction[:2]))
  
  if direction != 0:
    current = ['right', 'left'][direction % 2]
    
  print(current, instruction[2:])