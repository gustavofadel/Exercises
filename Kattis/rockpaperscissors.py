# coding: utf-8

def winner (p1, p2):
  return (p1 == 'paper' and p2 == 'scissors') or (p1 == 'rock' and p2 == 'paper') or (p1 == 'scissors' and p2 == 'rock')

first = True

while True:
  line = list(map(int, input().split()))
  
  if line[0] == 0:
    break
  
  if not first:
    print()
    
  first = False
  n, k = line
  games = k * n * (n - 1) // 2
  wins = [0 for i in range(n + 1)]
  losses = [0 for i in range(n + 1)]
  
  for i in range(games):
    p1, m1, p2, m2 = input().split()
    p1, p2 = map(int, [p1, p2])
    
    if m1 != m2:
      if winner(m1, m2) == 0:
        wins[p1] += 1
        losses[p2] += 1
        
      else:
        losses[p1] += 1
        wins[p2] += 1
        
  for i in range(1, n + 1):
    if wins[i] == losses[i] == 0:
      print('-')
      
    else:
      print('%.3f' % (wins[i] / (wins[i] + losses[i])))