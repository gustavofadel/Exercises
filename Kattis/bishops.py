# coding: utf-8

while True:
  try:
    size = int(input())
    
    print(2 * size - 2) if size > 1 else print(size)
    
  except EOFError:
    break