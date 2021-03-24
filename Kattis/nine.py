# coding: utf-8

def binaryExponentiation (a, b, m):
  a %= m
  answer = 1
  
  while b > 0:
    if b & 1:
      answer = answer * a % m
      
    a = a * a % m
    b >>= 1
    
  return answer

modulo = 10 ** 9 + 7

for ct in range(int(input())):
  d = int(input())
  
  print((8 * binaryExponentiation(9, d - 1, modulo)) % modulo)