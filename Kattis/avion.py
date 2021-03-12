# coding: utf-8

ciaBlimps = list()

for i in range(1, 6):
  code = input()
  
  if 'FBI' in code:
    ciaBlimps.append(i)
    
print(*ciaBlimps, sep = ' ') if len(ciaBlimps) > 0 else print('HE GOT AWAY!')