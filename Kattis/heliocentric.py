# coding: utf-8

case = 1

while True:
  try:
    e, m = map(int, input().split())
    days = 0
    
    while e != 0 or m != 0:
      days += 1
      e = (e + 1) % 365
      m = (m + 1) % 687
      
    print('Case %d:' % case, days)
    
    case += 1
    
  except EOFError:
    break