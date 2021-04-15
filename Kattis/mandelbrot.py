# coding: utf-8

case = 1

while True:
  try:
    x, y, r = map(float, input().split())
    out = False
    z = [0, 0]
    
    for i in range(int(r)):
      z = [z[0] * z[0] - z[1] * z[1] + x, 2 * z[0] * z[1] + y]
      
      if z[0] * z[0] + z[1] * z[1] > 4:
        out = True
        break
      
    print('Case %d:' % case, end = ' ')
    print('OUT') if out else print('IN')
    
    case += 1
    
  except EOFError:
    break