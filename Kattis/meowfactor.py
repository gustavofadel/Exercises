# coding: utf-8

n = int(input())
meow = 1

for i in range(2, 128):
  if n % (i ** 9) == 0:
    meow = i
    
print(meow)