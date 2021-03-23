# coding: utf-8

day = 1
bill = dict()
enter = dict()

while True:
  try:
    log = input().split()
    
    if log[0] == 'ENTER':
      name, time = log[1], int(log[2])
      enter[name] = time
      
    elif log[0] == 'EXIT':
      name, time = log[1], int(log[2])
      
      if name in bill:
        bill[name] += (time - enter[name]) * 0.1
        
      else:
        bill[name] = (time - enter[name]) * 0.1
        
    elif log[0] == 'CLOSE':
      print('Day', day)
      
      for name in sorted(bill):
        print(name, '$%.2f' % bill[name])
        
      print()
      
      bill.clear()
      enter.clear()
      day += 1
    
  except EOFError:
    break