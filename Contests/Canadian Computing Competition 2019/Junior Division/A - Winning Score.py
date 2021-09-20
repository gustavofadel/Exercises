# coding: utf-8

apples = 3 * int(input()) + 2 * int(input()) + int(input())
bananas = 3 * int(input()) + 2 * int(input()) + int(input())

if apples > bananas:
  print('A')
  
elif apples == bananas:
  print('T')
  
else:
  print('B')