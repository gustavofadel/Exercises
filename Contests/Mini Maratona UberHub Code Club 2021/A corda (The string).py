# coding: utf-8

name1, name2 = input().split()

if not (name1 == 'Reluew' and name2 == 'Markinhos'):
  print('Nao eh possivel descriptografar!')
  exit()
  
n = int(input())
word = list(input())

for i in range(len(word)):
  if word[i].isupper():
    position = ord(word[i]) - ord('A')
    word[i] = chr(ord('A') + position + n)
    
  else:
    position = ord(word[i]) - ord('a')
    word[i] = chr(ord('a') + position + n)
    
print(''.join(word))