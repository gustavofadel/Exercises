# coding: utf-8

def isVowel (letter):
  return letter in 'aeiouy'

while True:
  try:
    words = input().split()
    
    for word in words:
      if isVowel(word[0]):
        translated = word + 'yay'
        
      else:
        firstVowel = 0
        
        while not isVowel(word[firstVowel]):
          firstVowel += 1
          
        translated = word[firstVowel : len(word)] + word[0 : firstVowel] + 'ay'
        
      print(translated, end = ' ')
      
    print()
  except EOFError:
    break