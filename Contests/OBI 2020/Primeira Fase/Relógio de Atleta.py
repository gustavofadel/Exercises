# coding: utf-8

r, f, c = [int(input()) for i in range(3)]

if f > 3 * r or c < 95:
  print('diminuir')
  
elif f < 2 * r and c > 97:
  print('aumentar')
  
else:
  print('manter')