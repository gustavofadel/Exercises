# coding: utf-8

n, k = map(int, input().split())
blocks = [list(map(int, input().split())) for i in range(n)]
ordered = sorted(blocks)

for i in range(n):
  if blocks[i][1] != ordered[i][1]:
    print('N')
    exit()
    
print('Y')