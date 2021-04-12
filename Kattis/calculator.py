# coding: utf-8

while True:
  try:
    expression = input()
    
    print('%.2f' % eval(expression))
    
  except EOFError:
    break