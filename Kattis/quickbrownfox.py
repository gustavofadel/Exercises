# coding: utf-8

n = int(input())

for i in range(n):
  contains = [False for i in range(26)]
  phrase = input().lower()
  
  for i in range(len(phrase)):
    if phrase[i].islower():
      contains[ord(phrase[i]) - ord('a')] = True
      
  if False not in contains:
    print('pangram')
    
  else:
    print('missing', end = ' ')
    
    for i in range(26):
      if not contains[i]:
        print(chr(ord('a') + i), end = '')
        
    print()