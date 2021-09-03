# coding: utf-8

alfabeto = 'a b c d e f g h i j l m n o p q r s t u v x z'.split()

for letra in input():
  if letra in alfabeto:
    alfabeto.remove(letra)
    
print('NS'[not alfabeto])