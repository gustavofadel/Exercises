# coding: utf-8

a, b, h = map(int, input().split())
count = height = 0

while True:
  height += a
  count += 1
  
  if height >= h:
    print(count)
    break
  
  height -= b