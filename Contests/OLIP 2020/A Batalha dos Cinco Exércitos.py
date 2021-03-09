# coding: utf-8

h, e, a, o, w, x = map(int, input().split())
bem, mal = h + e + a, o + w

if bem > mal:
  print('Middle-earth is safe.')

else:
  bem += x
  
  if bem >= mal:
    print('Middle-earth is safe.')
    
  else:
    print('Sauron has returned.')