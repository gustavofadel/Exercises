# coding: utf-8

from math import sqrt

while True:
  try:
    n = int(input())
    divisors = list()
    
    i = 1
    
    while i * i < n:
      if n % i == 0:
        divisors.append(i)
        
      i += 1
    
    for i in range(int(sqrt(n)), 0, -1):
      if n % i == 0:
        divisors.append(n // i)
        
    sumDivisors = sum(divisors[:-1])
    
    if sumDivisors == n:
      print(n, 'perfect')
      
    elif abs(sumDivisors - n) <= 2:
      print(n, 'almost perfect')
      
    else:
      print(n, 'not perfect')
    
  except EOFError:
    break