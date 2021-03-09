# coding: utf-8

nome = input()
atual = list(map(int, input().split('/')))
nascimento = list(map(int, input().split('/')))

if atual[1] > nascimento[1]:
  print('Voce tem', atual[2] - nascimento[2], 'anos', nome, end='.\n')
  
elif atual[1] == nascimento[1]:
  if atual[0] == nascimento[0]:
    print('Feliz aniversario!')
    
  if atual[0] >= nascimento[0]:
    print('Voce tem', atual[2] - nascimento[2], 'anos', nome, end='.\n')
    
  else:
    print('Voce tem', atual[2] - nascimento[2] - 1, 'anos', nome, end='.\n')
    
else:
  print('Voce tem', atual[2] - nascimento[2] - 1, 'anos', nome, end='.\n')