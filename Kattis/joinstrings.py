# coding: utf-8

from sys import stdin, stdout

n = int(stdin.readline().strip())
strings = [stdin.readline().strip() for i in range(n)]
tree = [list() for i in range(n)]
a = 0

for i in range(n - 1):
  a, b = map(int, stdin.readline().strip().split())
  a -= 1
  b -= 1
  tree[a].append(b)
  
queue = [a]
  
while len(queue) > 0:
  index = queue.pop()
  stdout.write(strings[index])
  queue.extend(reversed(tree[index]))

stdout.write('\n')