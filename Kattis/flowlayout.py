# coding: utf-8

while True:
  m = int(input())
  
  if m == 0:
    break
  
  row = [0, 0]
  window = [0, 0]
  
  while True:
    w, h = map(int, input().split())
    
    if w == h == -1:
      break
    
    if row[0] + w <= m:
      row[0] += w
      row[1] = max(row[1], h)
      
    else:
      window[0] = max(window[0], row[0])
      window[1] += row[1]
      row = [w, h]
      
  print(max(window[0], row[0]), 'x', window[1] + row[1])