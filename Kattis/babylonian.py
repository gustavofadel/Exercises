# coding: utf-8

for ct in range(int(input())):
  n = [0 if x == '' else int(x) for x in input().split(',')]
  print(sum([n[-1 - i] * 60 ** i for i in range(len(n))]))