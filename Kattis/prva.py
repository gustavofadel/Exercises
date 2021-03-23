# coding: utf-8

r, c = map(int, input().split())
horizontal = [input() for i in range(r)]
vertical = ['' for i in range(c)]
words = set()

for i in range(c):
  for j in range(r):
    vertical[i] += horizontal[j][i]
    
for i in range(r):
  line = horizontal[i].split('#')
  
  for word in line:
    if len(word) >= 2:
      words.add(word)
      
for i in range(c):
  line = vertical[i].split('#')
  
  for word in line:
    if len(word) >= 2:
      words.add(word)
      
print(sorted(words)[0])