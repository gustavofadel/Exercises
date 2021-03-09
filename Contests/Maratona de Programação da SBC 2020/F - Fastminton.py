# coding: utf-8

jogador = [[0, 0], [0, 0]]
s = input()
vez = 0

for c in s:
  if c == 'Q':
    if jogador[vez][0] == 2:
      if vez == 0:
        print('%d (winner) - %d' % (jogador[0][0], jogador[1][0]))
        
      else:
        print('%d - %d (winner)' % (jogador[0][0], jogador[1][0]))
        
    else:
      esquerda, direita = str(jogador[0][1]), str(jogador[1][1])
      
      if vez == 0:
        esquerda += '*'
        
      else:
        direita += '*'
        
      print('%d (%s) - %d (%s)' % (jogador[0][0], esquerda, jogador[1][0], direita))
      
  else:
    if jogador[vez][0] < 2:
      if c == 'R':
        vez ^= 1
        
      jogador[vez][1] += 1
      
      if jogador[vez][1] == 10 or (jogador[vez][1] >= 5 and jogador[vez][1] - jogador[vez ^ 1][1] >= 2):
        jogador[vez][0] += 1
        jogador[vez][1] = jogador[vez ^ 1][1] = 0