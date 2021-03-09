# coding: utf-8

p1 = int(input())
p2 = int(input())

if (p1 >= 6 and p2 >= 6) and ((p1 >= 18 or p2 >= 18) or (p1 >= 14 and p2 >= 14)):
  print('YES')

else:
  print('NO')