# coding: utf-8

a, b = map(int, input().split())

for i in range(1, b + 1):
  word = ''
  
  while i > 0:
    word += chr(ord('a') + i % 26)
    i //= 26
    
  print(word, end = ' ')