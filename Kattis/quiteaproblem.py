# coding: utf-8

while True:
  try:
    line = input().lower()
    
    print('yes') if 'problem' in line else print('no')
    
  except EOFError:
    break