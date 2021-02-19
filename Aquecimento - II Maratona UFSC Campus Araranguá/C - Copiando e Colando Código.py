# coding: utf-8

body = False

while True:
  try:
    inp = input()
    
    if '<body>' in inp:
      body = True
      
    elif '</body>' in inp:
      body = False
      
    elif body:
      print(inp)
    
  except EOFError:
    break