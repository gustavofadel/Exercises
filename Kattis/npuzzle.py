# coding: utf-8

def find (letter):
  for i in range(4):
    for j in range(4):
      if puzzle[i][j] == letter:
        return (i, j)

puzzle = [input() for i in range(4)]
solved = ['ABCD', 'EFGH', 'IJKL', 'MNO ']
scatter = 0

for i in range(4):
  for j in range(4):
    if puzzle[i][j] != solved[i][j] and solved[i][j] != ' ':
      x, y = find(solved[i][j])
      scatter += abs(i - x) + abs(j - y)
      
print(scatter)