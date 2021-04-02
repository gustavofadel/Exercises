# coding: utf-8

from sys import stdin, stdout

s = stdin.readline().strip()
counter = {'R': 'S', 'B': 'K', 'L': 'H'}
i = 0

while i < len(s):
  if i < len(s) - 2:
    if s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2]:
      stdout.write('C')
      i += 3
      
    else:
      stdout.write(counter[s[i]])
      i += 1
      
  else:
    stdout.write(counter[s[i]])
    i += 1
  
stdout.write('\n')