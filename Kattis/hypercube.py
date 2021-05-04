# coding: utf-8

def getIndex (x):
  index = 0
  invert = False
  
  for i in range(len(x)):
    if (invert and x[i] == '0') or (not invert and x[i] == '1'):
      index += (1 << int(n)) // (1 << (i + 1))
      invert = True
      
    else:
      invert = False
      
  return index

n, a, b = input().split()
print(getIndex(b) - getIndex(a) - 1)