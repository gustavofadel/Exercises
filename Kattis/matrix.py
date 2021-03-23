# coding: utf-8

case = 1

while True:
  try:
    a, b = map(int, input().split())
    c, d = map(int, input().split())
    determinant = a * d - b * c
    
    print('Case %d:' % case)
    print(d // determinant, -b // determinant)
    print(-c // determinant, a // determinant)
    
    case += 1
    input()
    
  except EOFError:
    break