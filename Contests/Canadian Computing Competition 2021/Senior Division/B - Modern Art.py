# coding: utf-8

rows = [0 for i in range(int(input()))]
columns = [0 for i in range(int(input()))]

for i in range(int(input())):
  direction, number = input().split()
  
  if direction == 'R':
    rows[int(number) - 1] ^= 1
    
  else:
    columns[int(number) - 1] ^= 1
    
print(sum(rows) * len(columns) + sum(columns) * len(rows) - 2 * sum(rows) * sum(columns))