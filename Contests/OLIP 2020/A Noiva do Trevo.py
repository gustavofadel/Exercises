# coding: utf-8

p, q = map(int, input().split())
avistaram = dict()

for i in range(q):
  h, n = input().split()
  hora, minuto = map(int, h.split(':'))
  
  if hora == 0:
    if minuto <= p:
      horario = 1440 + minuto
      
      if horario in avistaram:
        avistaram[horario] = avistaram[horario] + ', ' + n
        
      else:
        avistaram[horario] = n
        
  else:
    if 60 - minuto <= p:
      horario = 1380 + minuto
      
      if horario in avistaram:
        avistaram[horario] = avistaram[horario] + ', ' + n
        
      else:
        avistaram[horario] = n
        
ordenado = sorted(avistaram.keys())

for x in ordenado:
  for y in avistaram[x].split(', '):
    print(y)