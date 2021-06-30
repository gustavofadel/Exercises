completo = { 
  'C': ['%02dC' for i in range(1, 14)], 
  'E': ['%02dE' for i in range(1, 14)],
  'U': ['%02dU' for i in range(1, 14)],
  'P': ['%02dP' for i in range(1, 14)]
}
produzidos = { 'C': [], 'E': [], 'U': [], 'P': [] }
cartas = input()
for i in range(0, len(cartas), 3):
  produzidos[cartas[i + 2]].append(cartas[i : i + 3])
for naipe in 'CEUP':
  erro = False
  for carta in produzidos[naipe]:
    if produzidos[naipe].count(carta) > 1:
      erro = True
      break
  print('erro' if erro else len(completo[naipe]) - len(produzidos[naipe]))