# coding: utf-8

def gcd (x, y):
  while y:
    x, y = y, x % y
    
  return x

a = int(input())
count = 0

for i in range(2, a + 1):
  count += int(gcd(a, i) != 1)
  
print(count)