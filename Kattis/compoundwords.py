# coding: utf-8

words = list()

while True:
  try:
    words.extend(input().split())
    
  except EOFError:
    break
  
compounded = set()

for i in range(len(words)):
  for j in range(len(words)):
    if i != j:
      compounded.add(words[i] + words[j])
      
compounded = sorted(compounded)

for word in compounded:
  print(word)