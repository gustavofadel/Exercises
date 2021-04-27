# coding: utf-8

while True:
  s0, s1, r0, r1 = map(int, input().split())
  
  if s0 == s1 == r0 == r1 == 0:
    break
  
  s0, s1 = sorted([s0, s1])
  r0, r1 = sorted([r0, r1])
  
  if s0 == r0 and s1 == r1:
    print('Tie.')
    
  else:
    p1, p2 = int(''.join(map(str, [s1, s0]))), int(''.join(map(str, [r1, r0])))
    winner = 1 if p1 > p2 else 2
    
    if p1 == 21 or p2 == 21:
      winner = 1 if p1 == 21 else 2
      
    elif s0 == s1 and r0 == r1:
      winner = 1 if p1 > p2 else 2
      
    elif s0 == s1:
      winner = 1
      
    elif r0 == r1:
      winner = 2
      
    print('Player', winner, 'wins.')