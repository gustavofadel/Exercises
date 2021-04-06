# coding: utf-8

def printInOrder (group):
  longest = max([len(word) for word in group])
  
  for word in sorted(group, key = lambda w: w[::-1]):
    print(word.rjust(longest))

group = list()

while True:
  try:
    word = input()
    
    if word == '':
      printInOrder(group)
      print()
      group = list()
      
    else:
      group.append(word)
    
  except EOFError:
    printInOrder(group)
    break