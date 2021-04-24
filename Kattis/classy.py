# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  maxLength = 0
  namesList = list()
  
  for i in range(n):
    name, className = input().split(': ')
    className = className[:-6].split('-')[::-1]
    
    for j in range(len(className)):
      if className[j] == 'upper':
        className[j] = 'lower'
        
      elif className[j] == 'lower':
        className[j] = 'upper'
    
    maxLength = max(maxLength, len(className))
    namesList.append([className, name])
    
  for className, name in namesList:
    className += ['middle'] * (maxLength - len(className)) + [name]
    
  for className, name in sorted(namesList):
    print(name)
    
  print('=' * 30)