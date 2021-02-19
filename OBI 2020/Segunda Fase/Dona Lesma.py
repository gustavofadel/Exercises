# coding: utf-8

a, s, d = [int(input()) for i in range(3)]
cont = h = 0

while h < a:
  cont += 1
  h += s
  
  if h >= a:
    break
  
  h -= d
  
print(cont)