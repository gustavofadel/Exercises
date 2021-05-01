# coding: utf-8

for ct in range(int(input())):
  l1, a1, l2, a2, lt, at = map(int, input().split())
  solution = list()
  x = 1
  
  while l1 * x < lt:
    if (lt - l1 * x) % l2 == 0:
      y = (lt - l1 * x) // l2
      
      if y > 0 and a1 * x + a2 * y == at:
        solution.append((x, y))
        
    x += 1
    
  print(*solution[0]) if len(solution) == 1 else print('?')