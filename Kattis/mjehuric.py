# coding: utf-8

pieces = list(map(int, input().split()))

for i in range(5):
  for j in range(4):
    if pieces[j] > pieces[j + 1]:
      pieces[j], pieces[j + 1] = pieces[j + 1], pieces[j]
      print(*pieces, sep = ' ')