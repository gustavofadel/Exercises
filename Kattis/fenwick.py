# coding: utf-8

from sys import stdin, stdout

def update (x, v):
  while x <= n + 1:
    tree[x] += v
    x += (x & -x)
    
def query (x):
  answer = 0
  
  while x > 0:
    answer += tree[x]
    x -= (x & -x)
    
  return answer

n, q = map(int, stdin.readline().strip().split())
tree = [0 for i in range(n + 5)]

for i in range(q):
  operation = stdin.readline().strip().split()
  
  if operation[0] == '+':
    x, v = map(int, operation[1:])
    update(x + 1, v)
    
  else:
    x = int(operation[1])
    stdout.write(str(query(x)) + '\n')