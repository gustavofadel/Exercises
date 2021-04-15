# coding: utf-8

case = 1
d = dict()
d['A#'] = 'Bb'
d['Bb'] = 'A#'
d['C#'] = 'Db'
d['Db'] = 'C#'
d['D#'] = 'Eb'
d['Eb'] = 'D#'
d['F#'] = 'Gb'
d['Gb'] = 'F#'
d['G#'] = 'Ab'
d['Ab'] = 'G#'

while True:
  try:
    note, tonality = input().split()
    
    print('Case %d:' % case, end = ' ')
    
    if note in d:
      print(d[note], tonality)
      
    else:
      print('UNIQUE')
      
    case += 1
    
  except EOFError:
    break