# coding: utf-8

firsts = dict()
names = list()

while True:
  try:
    first, last = input().split()
    firsts[first] = firsts.get(first, 0) + 1
    names.append((last, first))
    
  except EOFError:
    break
  
for last, first in sorted(names):
  print(first, last) if firsts[first] > 1 else print(first)