# coding: utf-8

n, m = map(int, input().split())
grid = [input() for i in range(n)]
blank = [True for i in range(m)]

for line in grid:
  for i, c in enumerate(line):
    if c == '$':
      blank[i] = False
      
print(sum(blank) + 1)