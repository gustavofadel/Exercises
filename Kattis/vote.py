# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  votes = [int(input()) for i in range(n)]
  total = sum(votes)
  winner = [(-1, -1)]
  
  for i in range(n):
    if votes[i] > winner[0][1]:
      winner = [(i + 1, votes[i])]
      
    elif votes[i] == winner[0][1]:
      winner.append((i + 1, votes[i]))
      
  if len(winner) > 1:
    print('no winner')
    
  else:
    percentage = winner[0][1] / total * 100
    
    if percentage > 50:
      print('majority winner', winner[0][0])
      
    else:
      print('minority winner', winner[0][0])