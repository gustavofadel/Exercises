# coding: utf-8

dictionary = dict()

while True:
  try:
    command = input().split()
    
    if command[0] == 'clear':
      dictionary.clear()
      
    elif command[0] == 'def':
      word, value = command[1], int(command[2])
      dictionary[word] = value
      
    else:
      expression = command[1:]
      unknown = False
      
      if expression[0] in dictionary:
        result = dictionary[expression[0]]
        
      else:
        unknown = True
        
      if not unknown:
        i = 1
        
        while i < len(expression) - 2 and not unknown:
          if expression[i] == '+' and expression[i + 1] in dictionary:
            result += dictionary[expression[i + 1]]
            
          elif expression[i] == '-' and expression[i + 1] in dictionary:
            result -= dictionary[expression[i + 1]]
            
          else:
            unknown = True
            
          i += 2
          
      if not unknown:
        found = False
        
        for key in dictionary:
          if dictionary[key] == result:
            result = key
            found = True
            break
          
        if not found:
          unknown = True
          
      if unknown:
        print(' '.join(expression), 'unknown')
        
      else:
        print(' '.join(expression), result)
        
  except EOFError:
    break