# coding: utf-8

from collections import Counter
from heapq import heappush, heappop
from sys import stdin, stdout

counter = Counter()
heap = list()
total = 0

for line in stdin:
  tree = line[:-1]
    
  if tree not in counter:
    heappush(heap, tree)
      
  counter[tree] += 1
  total += 1

while len(heap) > 0:
  tree = heappop(heap)
  stdout.write('%s %f\n' % (tree, counter[tree] / total * 100))