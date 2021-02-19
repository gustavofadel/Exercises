# coding: utf-8

c = int(input())
l = int(input())
a = min(int(input()), 5)
t1 = t2 = 0

if c % 2 == 0 and l % 2 == 0:
  if a > 1:
    t2 = (c // 2) * (l // 2) * (a // 2)
    
    if a % 2 == 1:
      t1 = l * c
      
  else:
    t1 = l * c
    
elif c % 2 == 0 and l % 2 != 0:
  if a > 1:
    t2 = (c // 2) * (l // 2) * (a // 2)
    t1 = c
    
    if a % 2 == 1:
      t1 *= (a - 1)
      t1 += (l * c)
      
    else:
      t1 *= a
      
  else:
    t1 = l * c
    
elif c % 2 != 0 and l % 2 == 0:
  if a > 1:
    t2 = (c // 2) * (l // 2) * (a // 2)
    t1 = l
    
    if a % 2 == 1:
      t1 *= (a - 1)
      t1 += (l * c)
      
    else:
      t1 *= a
      
  else:
    t1 = l * c
    
else:
  if a > 1:
    t2 = (c // 2) * (l // 2) * (a // 2)
    t1 = l + c
    
    if a % 2 == 1:
      t1 *= (a - 1)
      t1 += (l * c)
      
    else:
      t1 *= a
      
    if a == 2 or a == 3:
      t1 -= 2
      
    else:
      t1 -= 4
      
  else:
    t1 = l * c
    
print('$%d' % (t1 + 10 * t2))