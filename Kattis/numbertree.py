# coding: utf-8

line = input().split()

if len(line) == 1:
  h, path = int(line[0]), ''
  
else:
  h, path = int(line[0]), line[1]

root = 2 ** (h + 1)
node = 1

for i in range(len(path)):
  if path[i] == 'L':
    node = 2 * node
    
  else:
    node = 2 * node + 1
    
print(root - node)