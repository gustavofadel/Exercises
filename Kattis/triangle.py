# coding: utf-8

from math import log10

case = 1

while True:
  try:
    n = int(input())
    
    print('Case %d:' % case, int(n * log10(3 / 2) + log10(3)) + 1)
    
    case += 1
    
  except EOFError:
    break