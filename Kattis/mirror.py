# coding: utf-8

for ct in range(1, int(input()) + 1):
  r, c = map(int, input().split())
  image = [input() for i in range(r)]
  
  print('Test', ct)
  
  for i in range(r - 1, -1, -1):
    for j in range(c - 1, -1, -1):
      print(image[i][j], end = '')
      
    print()