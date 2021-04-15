# coding: utf-8

while True:
  try:
    pattern = input()
    text = input()
    lps = [0 for i in range(len(pattern))]
    i = 1
    length = 0
    
    while i < len(pattern):
      if pattern[i] == pattern[length]:
        length += 1
        lps[i] = length
        i += 1
        
      else:
        if length > 0:
          length = lps[length - 1]
          
        else:
          lps[i] = 0
          i += 1
    
    i = j = 0
    
    while i < len(text):
      if text[i] == pattern[j]:
        i += 1
        j += 1
        
      if j == len(pattern):
        print(i - j, end = ' ')
        j = lps[j - 1]
        
      elif i < len(text) and text[i] != pattern[j]:
        if j > 0:
          j = lps[j - 1]
        
        else:
          i += 1
          
      print()
    
  except EOFError:
    break