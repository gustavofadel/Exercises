# coding: utf-8

while True:
  line = list(map(int, input().split()))
  
  if line[0] == 0:
    break
  
  f, r = line
  front = list(map(int, input().split()))
  rear = list(map(int, input().split()))
  ratio = list()
  
  for i in range(f):
    for j in range(r):
      ratio.append(rear[j] / front[i])
      
  ratio.sort()
  
  print('%.2f' % max([ratio[i + 1] / ratio[i] for i in range(f * r - 1)]))