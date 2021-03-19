# coding: utf-8

n = int(input())
a = sorted(map(int, input().split()), reverse = True)
alice = bob = 0

for i in range(n):
  if i % 2 == 0:
    alice += a[i]
  
  else:
    bob += a[i]
    
print(alice, bob)