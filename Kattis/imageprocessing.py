# coding: utf-8

h, w, n, m = map(int, input().split())
image = [list(map(int, input().split())) for i in range(h)]
kernel = [list(map(int, input().split())) for i in range(n)]

for i in range(h - n + 1):
  for j in range(w - m + 1):
    result = 0
    
    for k in range(n - 1, -1, -1):
      for l in range(m - 1, -1, -1):
        result += kernel[k][l] * image[i + n - k - 1][j + m - l - 1]
        
    print(result, end = ' ')
    
  print()