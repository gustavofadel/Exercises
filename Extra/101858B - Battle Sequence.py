# coding: utf-8

s = input()
count = 0
previous = 'A'

for i in range(len(s)):
  if s[i] == previous:
    if count == 2:
      count = 0
      previous = 'A'
      print(['P', 'T'][int(s[i] == 'S')], end = '')
      
    else:
      count += 1
      previous = s[i]
      print(['B', 'D'][int(s[i] == 'S')], end = '')
      
  else:
    count = 1
    previous = s[i]
    print(['B', 'D'][int(s[i] == 'S')], end = '')