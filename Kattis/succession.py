# coding: utf-8

from collections import defaultdict

def royalBlood (name):
  if name == founder:
    return 1
    
  total = 0
  
  for parent in parents[name]:
    total += royalBlood(parent) / 2
    
  return total

n, m = map(int, input().split())
parents = defaultdict(list)
founder = input()

for i in range(n):
  child, a, b = input().split()
  parents[child] = [a, b]

heir = ''
mostBlood = -1

for i in range(m):
  claim = input()
  blood = royalBlood(claim)
  
  if blood > mostBlood:
    heir = claim
    mostBlood = blood
    
print(heir)