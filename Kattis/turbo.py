# coding: utf-8

def update (x, v):
  while x <= n:
    tree[x] += v
    x += (x & -x)
    
def query (x):
  result = 0
  
  while x > 0:
    result += tree[x]
    x -= (x & -x)
  
  return result
  
def get (x, y):
  return query(y) - query(x - 1)

n = int(input())
position = [0 for i in range(n + 1)]
tree = [0 for i in range(n + 1)]
value = [0 for i in range(n + 1)]

for i in range(1, n + 1):
  number = int(input())
  value[i] = number
  position[number] = i
  update(number, 1)
  
for i in range(n):
  if i & 1 == 0:
    update(position[i // 2 + 1], -1)
    print(get(1, position[i // 2 + 1]))
    
  else:
    update(position[n - i // 2], -1)
    print(get(position[n - i // 2], n))