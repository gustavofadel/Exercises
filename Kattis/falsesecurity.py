# coding: utf-8

toMorse = dict()
toMorse['A'] = '.-'
toMorse['B'] = '-...'
toMorse['C'] = '-.-.'
toMorse['D'] = '-..'
toMorse['E'] = '.'
toMorse['F'] = '..-.'
toMorse['G'] = '--.'
toMorse['H'] = '....'
toMorse['I'] = '..'
toMorse['J'] = '.---'
toMorse['K'] = '-.-'
toMorse['L'] = '.-..'
toMorse['M'] = '--'
toMorse['N'] = '-.'
toMorse['O'] = '---'
toMorse['P'] = '.--.'
toMorse['Q'] = '--.-'
toMorse['R'] = '.-.'
toMorse['S'] = '...'
toMorse['T'] = '-'
toMorse['U'] = '..-'
toMorse['V'] = '...-'
toMorse['W'] = '.--'
toMorse['X'] = '-..-'
toMorse['Y'] = '-.--'
toMorse['Z'] = '--..'
toMorse['_'] = '..--'
toMorse[','] = '.-.-'
toMorse['.'] = '---.'
toMorse['?'] = '----'

fromMorse = dict()

for key in toMorse:
  fromMorse[toMorse[key]] = key
  
while True:
  try:
    message = input()
    encoded = ''
    sizes = ''
    
    for character in message:
      encoded += toMorse[character]
      sizes += str(len(toMorse[character]))
      
    sizes = sizes[::-1]
    position = 0
    
    for size in sizes:
      print(fromMorse[encoded[position : position + int(size)]], end = '')
      position += int(size)
      
    print()
    
  except EOFError:
    break