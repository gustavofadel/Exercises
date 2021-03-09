# coding: utf-8

n = int(input())

for i in range(n):
  string1 = input()
  string2 = input()
  
  print(string1)
  print(string2)
  
  for i in range(len(string1)):
    if string1[i] == string2[i]:
      print('.', end = '')
      
    else:
      print('*', end = '')
      
  print('\n')