# coding: utf-8

def match (pattern, name):
  patterns = [i for i in pattern.split('*') if i != '']
  
  if len(patterns) == 0:
    return True
    
  if pattern[0] != '*':
    if name.startswith(patterns[0]):
      name = name[len(patterns[0]):]
      patterns = patterns[1:]
      
      if len(patterns) == 0:
        return True
        
    else:
      return False
      
  if pattern[-1] != '*':
    if name.endswith(patterns[-1]):
      name = name[:-len(patterns[-1])]
      patterns = patterns[:-1]
        
    else:
      return False
      
  i = 0
  
  for p in patterns:
    i = name.find(p, i)
    
    if i == -1:
      return False
    
    i += len(p)
    
  return True

p = input()
n = int(input())

for i in range(n):
  file = input()
  
  if match(p, file):
    print(file)