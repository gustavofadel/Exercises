# coding: utf-8

joao = maria = 0

for i in range(int(input())):
  m, j = input().split()
  
  if m != j:
    if (m == 'H' and j == 'A') or (m == 'A' and j == 'T') or (m == 'T' and j == 'H'):
      maria += 1
      
    else:
      joao += 1
      
print('Joao' if joao > maria else 'JanKenpon' if joao == maria else 'Maria')