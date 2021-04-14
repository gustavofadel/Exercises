# coding: utf-8

while True:
  try:
    marks = sorted(map(int, input().split()))
    good = [False for i in range(marks[-1] + 1)]
    isRuler = True
    
    for i in range(len(marks)):
      for j in range(i + 1, len(marks)):
        if good[marks[j] - marks[i]]:
          isRuler = False
          
        good[marks[j] - marks[i]] = True
    
    if isRuler:
      missing = list()
      
      for i in range(1, marks[-1] + 1):
        if not good[i]:
          missing.append(i)
          
      if len(missing) > 0:
        print('missing', end = ' ')
        print(*missing)
        
      else:
        print('perfect')
      
    else:
      print('not a ruler')
    
  except EOFError:
    break