# coding: utf-8

class Tree:
  def __init__ (self, n):
    self.n = n
    self.tree = [0 for i in range(n + 1)]
    
  def update (self, i, v):
    while i <= self.n:
      self.tree[i] += v
      i += (i & -i)
      
  def query (self, i):
    answer = 0
    
    while i > 0:
      answer += self.tree[i]
      i -= (i & -i)
      
    return answer

n = int(input())
a = list(map(int, input().split()))
inverted = 0
treeA = Tree(n)
treeB = Tree(n)

for i in range(n):
  if n - a[i] > 0:
    inverted += treeB.query(n - a[i])
    
  treeB.update(n - a[i] + 1, treeA.query(n - a[i]) if n - a[i] > 0 else 0)
  treeA.update(n - a[i] + 1, 1)
  
print(inverted)