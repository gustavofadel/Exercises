# coding: utf-8

n, p, s = map(int, input().split())

for i in range(s):
  choices = list(map(int, input().split()))[1:]
  print('KEEP') if p in choices else print('REMOVE')