# coding: utf-8

x = float(input())
hasSolution = False

if x < 10:
  p = 1
  
  for k in range(8):
    for a in range(1, 10):
      b = a * (p * x - 1) / (10 - x)
      
      if b >= p:
        continue
      
      b = round(b)
      
      for c in range(max(0, b - 1), min(p - 1, b + 1) + 1):
        if abs(x * (a * p + c) - (10 * c + a)) < 1e-5:
          print(p * a + c)
          hasSolution = True
          
    p *= 10
    
if not hasSolution:
  print('No solution')