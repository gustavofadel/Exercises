# coding: utf-8

def contains (x, y, x1, y1, x2, y2):
  return x1 <= x <= x2 and y1 <= y <= y2
  
def peanutStatus (x, y, peanutSize):
  for x1, y1, x2, y2, boxSize in boxes:
    if contains(x, y, x1, y1, x2, y2):
      return boxSize if boxSize != peanutSize else 'correct'
  
  return 'floor'

while True:
  n = int(input())
  
  if n == 0:
    break
  
  boxes = list()
  
  for i in range(n):
    x1, y1, x2, y2, boxSize = input().split()
    boxes.append((float(x1), float(y1), float(x2), float(y2), boxSize))
    
  m = int(input())
  
  for i in range(m):
    x, y, peanutSize = input().split()
    
    print(peanutSize, peanutStatus(float(x), float(y), peanutSize))
    
  print()