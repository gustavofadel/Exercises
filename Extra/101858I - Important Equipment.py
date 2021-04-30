# coding: utf-8

class Point:
  def __init__ (self, x, y):
    self.x = x
    self.y = y
    
  def __add__ (self, other):
    return Point(self.x + other.x, self.y + other.y)
    
  def __sub__ (self, other):
    return Point(self.x - other.x, self.y - other.y)
    
  def __mod__ (self, other):
    return self.x * other.y - self.y * other.x
    
def isInside (wall, point):
  for i in range(len(wall)):
    if (wall[(i + 1) % len(wall)] - wall[i]) % (point - wall[i]) < 0:
      return False
      
  return True

s, r, m = map(int, input().split())
sheena = [Point(*list(map(int, input().split()))) for i in range(s)]
rose = [Point(*list(map(int, input().split()))) for i in range(r)]
maria = [Point(*list(map(int, input().split()))) for i in range(m)]
n = int(input())

for i in range(n):
  point = Point(*list(map(int, input().split())))
  
  if isInside(sheena, point):
    print('Sheena')
    
  elif isInside(rose, point):
    print('Rose')
    
  elif isInside(maria, point):
    print('Maria')
    
  else:
    print('Outside')