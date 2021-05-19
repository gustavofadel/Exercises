# coding: utf-8

first = True

while True:
  n = int(input())
  
  if n == 0:
    break
  
  if not first:
    print()
    
  first = False
  image = [list(input()) for i in range(n)]
  maxLength = max(len(line) for line in image)
  
  for line in image:
    if len(line) < maxLength:
      line += [' '] * (maxLength - len(line))
      
  rotated = [[' ' for j in range(n)] for i in range(maxLength)]
  
  for i in range(maxLength):
    for j in range(n):
      if image[j][i] == '-':
        rotated[i][n - j - 1] = '|'
        
      elif image[j][i] == '|':
        rotated[i][n - j - 1] = '-'
        
      else:
        rotated[i][n - j - 1] = image[j][i]
        
  for i in range(maxLength):
    for j in range(n - 1, -1, -1):
      if rotated[i][j] != ' ':
        print(''.join(rotated[i][:j + 1]))
        break