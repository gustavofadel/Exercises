# coding: utf-8

def rankStars (rank):
  if 1 <= rank <= 10:
    return 5
    
  elif 11 <= rank <= 15:
    return 4
    
  elif 16 <= rank <= 20:
    return 3
    
  elif 21 <= rank <= 25:
    return 2
    
  return 1

matches = input()
rank = 25
stars = streak = 0

for match in matches:
  if match == 'W':
    streak += 1
    stars += 2 if streak >= 3 and 6 <= rank <= 25 else 1
    
    if stars > rankStars(rank):
      stars -= rankStars(rank)
      rank -= 1
      
  else:
    streak = 0
    stars -= 1 if rank < 20 or (rank == 20 and stars > 0) else 0
    
    if stars < 0:
      rank += 1
      stars = rankStars(rank) - 1
      
  if rank == 0:
    break
  
print('Legend') if rank == 0 else print(rank)