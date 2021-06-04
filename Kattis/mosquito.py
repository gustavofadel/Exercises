# coding: utf-8

while True:
  try:
    m, p, l, e, r, s, n = map(int, input().split())
    
    for i in range(n):
      l, p, m = m * e, l // r, p // s
      
    print(m)
    
  except:
    break