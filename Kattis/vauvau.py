# coding: utf-8

a, b, c, d = map(int, input().split())
arrive = list(map(int, input().split()))
message = ['none', 'one', 'both']

for i in range(3):
  attack = 0
  
  if 0 < arrive[i] % (a + b) <= a:
    attack += 1
    
  if 0 < arrive[i] % (c + d) <= c:
    attack += 1
    
  print(message[attack])