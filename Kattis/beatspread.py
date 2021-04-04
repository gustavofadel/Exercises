# coding: utf-8

for ct in range(int(input())):
  s, d = map(int, input().split())
  
  if (s + d) % 2 == 1 or s < d:
    print('impossible')
    
  else:
    print((s + d) // 2, s - (s + d) // 2)