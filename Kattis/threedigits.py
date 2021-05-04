# coding: utf-8

n = int(input())
factorial = 1
twos = fives = 0

for i in range(2, n + 1):
  while i % 5 == 0:
    i //= 5
    fives += 1
    
  while i & 1 == 0:
    i >>= 1
    twos += 1
    
  factorial = (factorial * i) % 1000
  
for i in range(twos - fives):
  factorial = (factorial * 2) % 1000
  
print('%03d' % factorial) if n > 6 and factorial < 100 else print(factorial)