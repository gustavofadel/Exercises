# coding: utf-8

nometam = [''] * 20

n = int(input())

for i in range(n):
  nome = input()
  
  nometam[len(nome)] += nome + ' '
  
for i in range(20):
  nometam[i] = nometam[i].strip()
  nometam[i] = nometam[i].split()

aux = i = 0

while aux < n:
  res = list()
  
  for j in range(20):
    try:
      if len(nometam[j][i]) > 0:
        res.append(nometam[j][i])
      
    except:
      pass
  
  print(*res, sep=', ')
  
  aux += len(res)
  i += 1