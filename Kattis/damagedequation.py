# coding: utf-8
  
a, b, c, d = input().split()
operators = ['+', '-', '//', '*']
valid = list()

for x in operators:
  for y in operators:
    if (x == '//' and b == '0') or (y == '//' and d == '0'):
      continue
    
    left = a + ' ' + x + ' ' + b
    right = c + ' ' + y + ' ' + d
    
    if eval(left) == eval(right):
      valid.append(left.replace('//', '/') + ' = ' + right.replace('//', '/'))
      
print('\n'.join(sorted(valid))) if len(valid) > 0 else print('problems ahead')