# coding: utf-8

number = dict()

number['a'] = '2'
number['b'] = '22'
number['c'] = '222'
number['d'] = '3'
number['e'] = '33'
number['f'] = '333'
number['g'] = '4'
number['h'] = '44'
number['i'] = '444'
number['j'] = '5'
number['k'] = '55'
number['l'] = '555'
number['m'] = '6'
number['n'] = '66'
number['o'] = '666'
number['p'] = '7'
number['q'] = '77'
number['r'] = '777'
number['s'] = '7777'
number['t'] = '8'
number['u'] = '88'
number['v'] = '888'
number['w'] = '9'
number['x'] = '99'
number['y'] = '999'
number['z'] = '9999'
number[' '] = '0'

for ct in range(1, int(input()) + 1):
  message = input()
  
  print('Case #%d:' % ct, end = ' ')
  
  for i in range(len(message)):
    if i > 0 and number[message[i]][0] == number[message[i - 1]][0]:
      print(' ', end = '')
        
    print(number[message[i]], end = '')
      
  print()