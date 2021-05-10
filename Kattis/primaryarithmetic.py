# coding: utf-8

while True:
  a, b = input().split()
  
  if a == b == '0':
    break
  
  a, b = a.zfill(10), b.zfill(10)
  carry = carries = 0
  
  for i in range(9, -1, -1):
    if int(a[i]) + int(b[i]) + carry > 9:
      carry = 1
      carries += 1
      
    else:
      carry = 0
      
  print('No carry operation.' if carries == 0 else '1 carry operation.' if carries == 1 else '%d carry operations.' % carries)