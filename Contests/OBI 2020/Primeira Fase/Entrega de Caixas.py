# coding: utf-8

a, b, c = [int(input()) for i in range(3)]
viagens = 3

if a + b < c:
  viagens -= 2
  
else:
  if a < b:
    viagens -= 1
    
  if b < c:
    viagens -= 1
  
print(viagens)