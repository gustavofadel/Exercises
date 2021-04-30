# coding: utf-8

modulo = 10 ** 9 + 7

def remainder (value):
  return value % modulo if value > 0 else (value % modulo + modulo) % modulo

class Matrix:
  def __init__ (self, a, b, c, d):
    self.a = a
    self.b = b
    self.c = c
    self.d = d
    
  def __mul__ (self, other):
    return Matrix( \
    remainder(remainder(self.a * other.a) + remainder(self.b * other.c)), \
    remainder(remainder(self.a * other.b) + remainder(self.b * other.d)), \
    remainder(remainder(self.c * other.a) + remainder(self.d * other.c)), \
    remainder(remainder(self.c * other.b) + remainder(self.d * other.d)))
    
n = int(input())

if n == 0 or n & 1:
  print(0)
  exit()
  
n >>= 1
a = Matrix(11, 3, 3, 1)
b = Matrix(4, -1, 1, 0)

while n:
  if n & 1:
    a = b * a
    
  b *= b
  n >>= 1
  
print(a.d)