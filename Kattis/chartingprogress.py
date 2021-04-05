# coding: utf-8

from sys import stdin, stdout

total = 0

for line in stdin:
  if line == '\n':
    total = 0
    stdout.write('\n')
  
  else:
    count = line.count('*')
    length = len(line) - 1
    stdout.write(('.' * (length - count - total)) + ('*' * count) + ('.' * total) + '\n')
    total += count