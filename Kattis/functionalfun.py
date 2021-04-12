# coding: utf-8

while True:
  try:
    domain = set(input().split()[1:])
    codomain = set(input().split()[1:])
    n = int(input())
    f = dict()
    
    for i in range(n):
      x, y = input().split(' -> ')
      f[x] = y
      
    if len(f) != n or not set(f.keys()).issubset(domain) or not set(f.values()).issubset(codomain):
      print('not a function')
      
    else:
      surjective = codomain == set(f.values())
      injective = len(f.values()) == len(set(f.values()))
      
      if surjective:
        print('bijective') if injective else print('surjective')
      
      else:
        print('injective') if injective else print('neither injective nor surjective')
    
  except EOFError:
    break