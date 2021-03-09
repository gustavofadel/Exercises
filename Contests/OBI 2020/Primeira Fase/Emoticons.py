# coding: utf-8

mensagem = input()
divertido, chateado = mensagem.count(':-)'), mensagem.count(':-(')

if divertido > chateado:
  print('divertido')
  
elif chateado > divertido:
  print('chateado')
  
else:
  print('neutro')