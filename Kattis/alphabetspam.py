# coding: utf-8

string = input()
size = len(string)
whitespace = lowercase = uppercase = symbols = 0

for i in range(size):
  if string[i] == '_':
    whitespace += 1
    
  elif string[i].islower():
    lowercase += 1
    
  elif string[i].isupper():
    uppercase += 1
    
  else:
    symbols += 1
    
print(whitespace / size)
print(lowercase / size)
print(uppercase / size)
print(symbols / size)