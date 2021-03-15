# coding: utf-8

appeared = set()

while True:
  try:
    text = input().split()
    
    for word in text:
      if word.lower() not in appeared:
        print(word, end = ' ')
        appeared.add(word.lower())
        
      else:
        print('.', end = ' ')
        
    print()
  
  except EOFError:
    break