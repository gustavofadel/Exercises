# coding: utf-8

while True:
  try:
    n = int(input())
    s = input()
    
    for i in range(len(s)):
      if ord('!') <= ord(s[i]) <= ord('*') or ord('[') <= ord(s[i]) <= ord(']'):
        print('\\' * ((1 << n) - 1), end = '')
      
      print(s[i], end = '')
      
    print()
    
  except EOFError:
    break