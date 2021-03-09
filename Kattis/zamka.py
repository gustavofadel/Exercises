# coding: utf-8

l = int(input())
d = int(input())
x = int(input())

for n in range(l, d + 1):
  digits = list(map(int, list(str(n))))
  
  if sum(digits) == x:
    print(n)
    break
  
for m in range(d, l - 1, -1):
  digits = list(map(int, list(str(m))))
  
  if sum(digits) == x:
    print(m)
    break