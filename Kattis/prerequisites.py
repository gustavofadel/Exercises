# coding: utf-8

while True:
  line = list(map(int, input().split()))
  
  if line[0] == 0:
    break
  
  k, m = line
  selected = set(map(int, input().split()))
  valid = True
  
  for i in range(m):
    category = list(map(int, input().split()))
    c, r, courses = category[0], category[1], category[2:]
    
    if sum([int(courses[i] in selected) for i in range(c)]) < r:
      valid = False
      
  print('yes') if valid else print('no')