# coding: utf-8

nSet = 1

while True:
  n = int(input())
  
  if n == 0:
    break
  
  names = sorted([input() for i in range(n)], key = len)
  symmetric = ['' for i in range(n)]
  index, top, bottom = 0, 0, n - 1
  
  while index < n - 1:
    symmetric[top] = names[index]
    symmetric[bottom] = names[index + 1]
    index += 2
    top += 1
    bottom -= 1
    
  symmetric[top] = names[n - 1]
    
  print('SET', nSet)
  print(*symmetric, sep = '\n')
  
  nSet += 1