# coding: utf-8

for ct in range(int(input())):
  price = int(input())
  n = int(input())
  coins = [int(input()) for i in range(n)]
  table = [10001 for i in range(19999)]
  table[0] = 0
  
  for coin in coins:
    current = price - 1
    
    while current >= 0:
      if table[current] != 10001:
        table[current + coin] = min(table[current + coin], table[current] + 1)
      
      current -= 1
      
  while table[price] == 10001:
    price += 1
    
  print(price, table[price])