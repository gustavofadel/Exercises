# coding: utf-8

from math import sqrt

received = input()
rows = int(sqrt(len(received)))

while len(received) % rows != 0:
  rows -= 1
  
columns = len(received) // rows
matrix = list()

for i in range(columns):
  matrix.append(received[rows * i : rows * i + rows])
  
for i in range(rows):
  for j in range(columns):
    print(matrix[j][i], end = '')