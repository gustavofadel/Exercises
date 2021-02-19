# coding: utf-8

n = int(input())
linhas = 0

while True:
  try:
    mensagem = input()
    
    if len(mensagem) == 0:
      continue
    
    linhas += 1
    caracteres = 0
    
    for i in range(len(mensagem)):
      caracteres += 1
      
      if caracteres == n:
        if i != len(mensagem) - 1:
          linhas += 1
          
        caracteres = 0
        
      elif caracteres == 1:
        if mensagem[i] == ' ':
          caracteres -= 1
    
  except EOFError:
    break
  
print(linhas)