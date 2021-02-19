# coding: utf-8

while True:
  try:
    s = input()
    
    if len(s) > 3:
      print('Essa coluna nao existe Tobias!')
      
    else:
      if len(s) == 1:
        res = (ord(s[0]) - ord('A') + 1)
        
      elif len(s) == 2:
        res = 26 * (ord(s[0]) - ord('A') + 1) + (ord(s[1]) - ord('A') + 1)
        
      else:
        res = 676 * (ord(s[0]) - ord('A') + 1) + 26 * (ord(s[1]) - ord('A') + 1) + (ord(s[2]) - ord('A') + 1)
        
      print(res) if res <= 16384 else print('Essa coluna nao existe Tobias!')
    
  except EOFError:
    break