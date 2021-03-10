# coding: utf-8

def isVowel (letter):
  return letter in 'aeiou'

sentence = input()
i = 0

while i < len(sentence):
  print(sentence[i], end = '')
  
  if isVowel(sentence[i]):
    i += 2
    
  i += 1

print()