# coding: utf-8

teclas = dict()
teclas['a'] = '2'
teclas['A'] = '2'
teclas['b'] = '22'
teclas['B'] = '22'
teclas['c'] = '222'
teclas['C'] = '222'
teclas['d'] = '3'
teclas['D'] = '3'
teclas['e'] = '33'
teclas['E'] = '33'
teclas['f'] = '333'
teclas['F'] = '333'
teclas['g'] = '4'
teclas['G'] = '4'
teclas['h'] = '44'
teclas['H'] = '44'
teclas['i'] = '444'
teclas['I'] = '444'
teclas['j'] = '5'
teclas['J'] = '5'
teclas['k'] = '55'
teclas['K'] = '55'
teclas['l'] = '555'
teclas['L'] = '555'
teclas['m'] = '6'
teclas['M'] = '6'
teclas['n'] = '66'
teclas['N'] = '66'
teclas['o'] = '666'
teclas['O'] = '666'
teclas['p'] = '7'
teclas['P'] = '7'
teclas['q'] = '77'
teclas['Q'] = '77'
teclas['r'] = '777'
teclas['R'] = '777'
teclas['s'] = '7777'
teclas['S'] = '7777'
teclas['t'] = '8'
teclas['T'] = '8'
teclas['u'] = '88'
teclas['U'] = '88'
teclas['v'] = '888'
teclas['V'] = '888'
teclas['w'] = '9'
teclas['W'] = '9'
teclas['x'] = '99'
teclas['X'] = '99'
teclas['y'] = '999'
teclas['Y'] = '999'
teclas['z'] = '9999'
teclas['Z'] = '9999'
teclas[' '] = '0'

n = int(input())

for ct in range(n):
  frase = input()
  res = ''
  
  for i in range(len(frase)):
    if i == 0:
      if frase[i].isalpha():
        if frase[i].isupper():
          res += '#'
          
        res += teclas[frase[i]]
          
    else:
      if teclas[frase[i-1]][0] == teclas[frase[i]][0] and frase[i].islower():
        res += '*'
          
      if frase[i].isupper():
        res += '#'
        
      res += teclas[frase[i]]
        
  print(res)