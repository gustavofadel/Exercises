# coding: utf-8

for ct in range(int(input())):
  input()
  
  ng, nm = map(int, input().split())
  godzilla = list(map(int, input().split()))
  mechagodzilla = list(map(int, input().split()))
  
  print('MechaGodzilla') if max(mechagodzilla) > max(godzilla) else print('Godzilla')