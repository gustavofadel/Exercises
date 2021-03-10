# coding: utf-8

string = input()
intended = list()

for i in range(len(string)):
  if string[i] != '<':
    intended.append(string[i])
    
  else:
    intended.pop()
    
print(''.join(intended))