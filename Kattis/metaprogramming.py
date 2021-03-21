# coding: utf-8

value = dict()

while True:
  try:
    command = input().split()
    
    if command[0] == 'define':
      if command[1].isalpha():
        number = value[command[1]]
        
      else:
        number = int(command[1])
        
      name = command[2]
      value[name] = number
      
    else:
      x, y, z = command[1:]
      
      if x not in value or z not in value:
        print('undefined')
        
      else:
        if y == '=':
          y += '='
        
        print(str(eval(str(value[x]) + ' ' + y + ' ' + str(value[z]))).lower())
    
  except EOFError:
    break