# coding: utf-8

n = int(input())
a = input().split()
makesSense = True

for i in range(n):
  if a[i] != str(i + 1) and a[i] != 'mumble':
    makesSense = False
    break
  
print('makes sense') if makesSense else print('something is fishy')