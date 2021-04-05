# coding: utf-8

case = 1

while True:
  pixels = input()
  
  if pixels == 'END':
    break
  
  if len(pixels) == 1:
    print(case, 'EVEN')
  
  else:
    pattern = '*'
    pixels = pixels[1:]
    
    while pixels[0] == '.':
      pattern += '.'
      pixels = pixels[1:]
      
    while pixels.find(pattern) == 0:
      pixels = pixels[len(pattern):]
      
    print(case, 'EVEN') if len(pixels) <= 1 else print(case, 'NOT EVEN')
    
  case += 1