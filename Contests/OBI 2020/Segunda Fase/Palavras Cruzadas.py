# coding: utf-8

h, v = [input() for i in range(2)]
ih = iv = -1
flag = False

for i in range(len(h) - 1, -1, -1):
  for j in range(len(v) - 1, -1, -1):
    if h[i] == v[j]:
      ih, iv = i + 1, j + 1
      flag = True
      break
    
  if flag:
    break
  
print(ih, iv)