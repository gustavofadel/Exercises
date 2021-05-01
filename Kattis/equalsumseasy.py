# coding: utf-8

from itertools import chain, combinations

def findSubsets ():
  subsets = list(chain.from_iterable(combinations(s, i) for i in range(1, n + 1)))
  sums = dict()
  
  for subset in subsets:
    currentSum = sum(subset)
    sums[currentSum] = sums.get(currentSum, []) + [subset]
    
    if len(sums[currentSum]) == 2:
      return sums[currentSum]
      
  return None

for ct in range(1, int(input()) + 1):
  line = list(map(int, input().split()))
  n, s = line[0], line[1:]
  subsets = findSubsets()
  
  print('Case', '#%d:' % ct)
  
  if subsets is None:
    print('Impossible')
    
  else:
    print('\n'.join([' '.join(map(str, subset)) for subset in subsets]))