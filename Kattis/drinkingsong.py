# coding: utf-8

n = int(input())
word = input()

for i in range(n, 0, -1):
  if i > 2:
    print('%d bottles of %s on the wall, %d bottles of %s.\nTake one down, pass it around, %d bottles of %s on the wall.' % (i, word, i, word, i - 1, word))
    
  elif i == 2:
    print('2 bottles of %s on the wall, 2 bottles of %s.\nTake one down, pass it around, 1 bottle of %s on the wall.' % (word, word, word))
    
  else:
    print('1 bottle of %s on the wall, 1 bottle of %s.\nTake it down, pass it around, no more bottles of %s.' % (word, word, word))
    
  print()