# coding: utf-8

s, c, k = map(int, input().split())
d = sorted(map(int, input().split()))
lowest = d[0]
inMachine = needed = 1

for i in range(1, s):
  if inMachine == c:
    inMachine = 0
    lowest = d[i]
    needed += 1
    
  if d[i] - lowest > k:
    inMachine = 0
    lowest = d[i]
    needed += 1
    
  inMachine += 1
    
print(needed)