# coding: utf-8

key = input().replace(' ', '')
appeared = [False for i in range(26)]
newKey = ''

for i in range(len(key)):
  letter = ord(key[i]) - ord('a')
  
  if not appeared[letter]:
    newKey += chr(letter + ord('a'))
    appeared[letter] = True
    
key = newKey
text = list(input().replace(' ', ''))
position = dict()
table = [['' for j in range(5)] for i in range(5)]

for i in range(26):
  letter = chr(ord('a') + i)
  
  if letter not in key and letter != 'q':
    key += letter

x = y = 0

for i in range(len(key)):
  position[key[i]] = (x, y)
  table[x][y] = key[i].upper()
  
  y += 1
  
  if y == 5:
    x += 1
    y = 0

i = 0

while i < len(text):
  if i + 1 >= len(text):
    text.append('x')
    
  if text[i] == text[i + 1]:
    text.insert(i + 1, 'x')
  
  xa, ya = position[text[i]]
  xb, yb = position[text[i + 1]]
  
  if xa == xb:
    ya = (ya + 1) % 5
    yb = (yb + 1) % 5
    
  elif ya == yb:
    xa = (xa + 1) % 5
    xb = (xb + 1) % 5
    
  else:
    ya, yb = yb, ya
  
  print('%s%s' % (table[xa][ya], table[xb][yb]), end = '')
  
  i += 2
  
print()