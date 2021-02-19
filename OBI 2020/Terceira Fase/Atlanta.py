# coding: utf-8

a, b = [int(input()) for i in range(2)]
ok = False

for i in range(1, b + 1):
  if b % i != 0:
    continue
  
  c, l = b // i + 2, i + 2
  
  if 2 * (c + l) - 4 == a:
    ok = True
    break
  
print(l, c) if ok else print(-1, -1)