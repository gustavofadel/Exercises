# coding: utf-8

from math import sqrt

n = int(input())
friends = set()

for i in range(1, int(sqrt(n)) + 1):
  if n % i == 0:
    friends.add(i - 1)
    friends.add(n // i - 1)
    
print(*sorted(friends))