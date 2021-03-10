# coding: utf-8

dictionary = dict()

while True:
  words = input().split()
  
  if len(words) == 0:
    break
  
  english, foreign = words
  dictionary[foreign] = english
  
while True:
  try:
    word = input()
    
    if word in dictionary:
      print(dictionary[word])
      
    else:
      print('eh')
    
  except EOFError:
    break