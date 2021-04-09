# coding: utf-8

s, v1, v2 = map(int, input().split())
i = 0

while v2 * i <= s:
  if (s - (v2 * i)) % v1 == 0:
    print((s - (v2 * i)) // v1, i)
    exit()
    
  i += 1
  
print('Impossible')