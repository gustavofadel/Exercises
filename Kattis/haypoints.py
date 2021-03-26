# coding: utf-8

from sys import stdin, stdout

m, n = map(int, stdin.readline().strip().split())
d = dict()

for i in range(m):
  word, value = stdin.readline().strip().split()
  d[word] = int(value)
  
for i in range(n):
  salary = 0
  line = stdin.readline().strip().split()
  
  while line != ['.']:
    for word in line:
      if word in d:
        salary += d[word]
        
    line = stdin.readline().strip().split()
      
  stdout.write(str(salary) + '\n')