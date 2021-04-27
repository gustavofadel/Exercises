# coding: utf-8

def dfs (leaf):
  print(leaf, end = ' ')
  
  if leaf in tree:
    dfs(tree[leaf])

k = int(input())
tree = dict()

while True:
  branch = list(map(int, input().split()))
  
  if branch[0] == -1:
    break
  
  for i in range(1, len(branch)):
    tree[branch[i]] = branch[0]
    
dfs(k)