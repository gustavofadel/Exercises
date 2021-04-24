# coding: utf-8

def query (x):
  answer = 0
  
  while x > 0:
    answer += tree[x - 1]
    x &= x - 1
    
  return answer
  
def update (x, v):
  while x <= n:
    tree[x] += v
    x |= x + 1
    
def get (x):
  return query(x + 1) - query(x)

n, k = map(int, input().split())
tree = [0 for i in range(n + 1)]

for i in range(k):
  line = input().split()
  
  if len(line) == 2:
    x = int(line[1])
    value = get(x)
    
    if value == 0:
      value = 1
      
    else:
      value = -1
      
    update(x, value)
    
  else:
    l, r = map(int, line[1:])
    
    print(query(r + 1) - query(l))