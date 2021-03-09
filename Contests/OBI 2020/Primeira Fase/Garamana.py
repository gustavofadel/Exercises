# coding: utf-8

p, a = [input() for i in range(2)]
cont_p, cont_a = dict(), dict()

for x in 'abcdefghijklmnopqrstuvwxyz':
  cont_p[x] = p.count(x)
  cont_a[x] = a.count(x)
  
res = 'S'

for x in 'abcdefghijklmnopqrstuvwxyz':
  if cont_p[x] < cont_a[x]:
    res = 'N'
    break
  
print(res)