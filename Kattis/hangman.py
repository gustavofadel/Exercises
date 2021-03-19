# coding: utf-8

word = input()
alphabet = input()
win = False
components = 0

for letter in alphabet:
  if letter not in word:
    components += 1
    
  else:
    word = word.replace(letter, '_')
    
  if word.count('_') == len(word):
    win = True
    break
  
  elif components == 10:
    break
  
print('WIN') if win else print('LOSE')