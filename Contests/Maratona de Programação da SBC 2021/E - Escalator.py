# coding: utf-8
 
direction = last = 0
using = False
 
for i in range(int(input())):
  t, d = map(int, input().split())
  
  if t > last:
    if using:
      direction ^= 1
      last += 10
      using = False
      
  if t > last:
    direction = d
    last = t + 10
    
  elif d == direction:
    last = t + 10
    
  else:
    using = True
    
if using:
  last += 10
  
print(last)