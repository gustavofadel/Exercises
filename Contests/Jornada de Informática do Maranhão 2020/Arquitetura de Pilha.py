# coding: utf-8

n = int(input())
pilha = list()
ram = [None for i in range(100)]

for i in range(n):
  comando = input()
  
  if comando[:3] == 'pus':
    if comando[5] == 'R':
      pos = int(comando[6:])
      
      if ram[pos] is not None:
        pilha.append(ram[pos])
    
    else:
      pilha.append(int(comando[5:]))
      
  elif comando[:3] == 'pop':
    pos = int(comando[5:])
    
    if len(pilha) > 0:
      ram[pos] = pilha.pop()
      
  elif comando[:3] == 'pri':
    if len(pilha) > 0:
      print(pilha.pop())
      
  else:
    if len(pilha) >= 2:
      x = pilha.pop()
      y = pilha.pop()
      
      if comando[:3] == 'add':
        pilha.append(y + x)
        
      elif comando[:3] == 'mul':
        pilha.append(y * x)
        
      elif comando[:3] == 'div':
        pilha.append(y // x)
        
      else:
        pilha.append(y - x)