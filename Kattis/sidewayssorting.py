# coding: utf-8

while True:
  r, c = map(int, input().split())
  
  if r == c == 0:
    break
  
  lines = [input() for i in range(r)]
  sortedList = ['' for i in range(c)]
  
  for i in range(r):
    for j, letter in enumerate(lines[i]):
      sortedList[j] += letter
      
  sortedList.sort(key = lambda s: s.lower())
  
  for i in range(r):
    for j in range(c):
      print(sortedList[j][i], end = '')
      
    print()
    
  print()