# coding: utf-8

dictionary = dict()
dictionary['**** ** ** ****'] = 0
dictionary['  *  *  *  *  *'] = 1
dictionary['***  *****  ***'] = 2
dictionary['***  ****  ****'] = 3
dictionary['* ** ****  *  *'] = 4
dictionary['****  ***  ****'] = 5
dictionary['****  **** ****'] = 6
dictionary['***  *  *  *  *'] = 7
dictionary['**** ***** ****'] = 8
dictionary['**** ****  ****'] = 9
strings = ['' for i in range(10)]

for i in range(5):
  line = input()
  n = len(line) // 4 + 1
  
  for j in range(n):
    strings[j] += line[4 * j : 4 * j + 3]

number = 0

for i in range(n):
  if strings[i] in dictionary:
    number = (number * 10) + dictionary[strings[i]]
    
  else:
    print('BOOM!!')
    exit(0)
    
print('BEER!!') if number % 6 == 0 else print('BOOM!!')