# coding: utf-8

for ct in range(1, int(input()) + 1):
  s = int(input())
  segments = input().split()
  blues = list()
  reds = list()
  
  for i in range(s):
    length, color = int(segments[i][:-1]) - 1, segments[i][-1]
    
    if color == 'B':
      blues.append(length)
      
    else:
      reds.append(length)
      
  blues.sort(reverse = True)
  reds.sort(reverse = True)
  
  maximumLength = 0
  
  for i in range(min(len(blues), len(reds))):
    maximumLength += blues[i] + reds[i]
    
  print('Case #%d:' % ct, maximumLength)