# coding: utf-8

def valueConverter (x):
  if x.isalpha():
    return ord(x) - ord('a') + 10
  
  elif x == '0':
    return 2
    
  else:
    return int(x)

for ct in range(int(input())):
  x, op, y, equals, z = input().split()
  bases = ''
  minBase = 1
  
  for c in x:
    minBase = max(minBase, valueConverter(c))
    
  for c in y:
    minBase = max(minBase, valueConverter(c))
    
  for c in z:
    minBase = max(minBase, valueConverter(c))
  
  for i in range(minBase, 37):
    try:
      if i == 1:
        a, b, c = len(x), len(y), len(z)
        
      else:
        a, b, c = int(x, i), int(y, i), int(z, i)
      
      if op == '+':
        valid = (a + b == c)
        
      elif op == '-':
        valid = (a - b == c)
        
      elif op == '*':
        valid = (a * b == c)
        
      else:
        if b == 0:
          valid = False
          
        else:
          division = a / b
          valid = (division * b == a and a / b == c)
      
      if valid:
        if i == 36:
          bases += '0'
          
        elif i >= 10:
          bases += chr(ord('a') + i - 10)
          
        else:
          bases += str(i)
          
    except:
      pass
        
  print(bases) if bases != '' else print('invalid')