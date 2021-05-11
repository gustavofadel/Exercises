# coding: utf-8

from functools import reduce
from itertools import combinations

cards = list(map(int, input().split()))
k = int(input())
ways = 0

for combination in combinations(cards, k):
  ways += reduce(lambda x, y: x * y, combination)
  
print(ways)