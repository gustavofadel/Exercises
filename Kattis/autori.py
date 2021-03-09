# coding: utf-8

line = input().split('-')
short = ''

for i in range(len(line)):
  short += line[i][0]
  
print(short)