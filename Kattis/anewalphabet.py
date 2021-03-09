# coding: utf-8

text = input().lower()
alphabet = dict()

alphabet['a'] = '@'
alphabet['b'] = '8'
alphabet['c'] = '('
alphabet['d'] = '|)'
alphabet['e'] = '3'
alphabet['f'] = '#'
alphabet['g'] = '6'
alphabet['h'] = '[-]'
alphabet['i'] = '|'
alphabet['j'] = '_|'
alphabet['k'] = '|<'
alphabet['l'] = '1'
alphabet['m'] = '[]\/[]'
alphabet['n'] = '[]\[]'
alphabet['o'] = '0'
alphabet['p'] = '|D'
alphabet['q'] = '(,)'
alphabet['r'] = '|Z'
alphabet['s'] = '$'
alphabet['t'] = "']['"
alphabet['u'] = '|_|'
alphabet['v'] = '\/'
alphabet['w'] = '\/\/'
alphabet['x'] = '}{'
alphabet['y'] = '`/'
alphabet['z'] = '2'

for i in range(len(text)):
  if text[i] in alphabet:
    print(alphabet[text[i]], end = '')
  
  else:
    print(text[i], end = '')
    
print()