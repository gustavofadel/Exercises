# coding: utf-8

from math import pi

alphabet = dict()

for i in range(26):
  alphabet[chr(ord('A') + i)] = i + 1
  
alphabet[' '] = 27
alphabet["'"] = 28

for ct in range(int(input())):
  s = input()
  previous = alphabet[s[0]]
  time = 1
  
  for i in range(1, len(s)):
    current = alphabet[s[i]]
    difference = min(abs(current - previous), 28 - max(previous, current) + min(previous, current))
    time += (difference * pi * 60 / 28) / 15 + 1
    previous = current
    
  print(time)