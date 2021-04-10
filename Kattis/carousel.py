# coding: utf-8

while True:
  n, m = map(int, input().split())
  
  if n == m == 0:
    break
  
  price = -1
  tickets = 0
  
  for i in range(n):
    a, b = map(int, input().split())
    
    if a <= m:
      if tickets == 0 or a * price > b * tickets or (a * price == b * tickets and a > tickets):
        price = b
        tickets = a
        
  print('Buy %d tickets for $%d' % (tickets, price)) if tickets > 0 else print('No suitable tickets offered')