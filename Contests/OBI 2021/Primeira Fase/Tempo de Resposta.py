n = int(input())
nao_respondeu = dict()
tempos = dict()
tempo_passado = 0
for i in range(n):
  t, x = input().split()
  x = int(x)
  if t == 'R':
    nao_respondeu[x] = tempo_passado
  elif t == 'E':
    tempos[x] = tempos.get(x, 0) + (tempo_passado - nao_respondeu[x])
    nao_respondeu.pop(x, None)
  tempo_passado += 1 if t != 'T' else (x - 1)
for amigo in sorted(set(nao_respondeu.keys()).union(set(tempos.keys()))):
  print(amigo, tempos[amigo] if amigo not in nao_respondeu else -1)