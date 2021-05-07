# coding: utf-8

for case in range(1, int(input()) + 1):
  sequence = list(map(int, input().split()[1:]))
  islands = 0
  
  for i in range(1, 12):
    for j in range(i + 1, 12):
      smallest = min(sequence[i : j])
      
      if smallest > sequence[i - 1] and smallest > sequence[j]:
        islands += 1
        
  print(case, islands)