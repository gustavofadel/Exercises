# coding: utf-8

text = input()
days = len(text)

for i in range(1, len(text) - 1, 3):
  days -= text[i - 1] == 'P'
  days -= text[i] == 'E'
  days -= text[i + 1] == 'R'
  
print(days)