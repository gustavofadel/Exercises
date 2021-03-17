# coding: utf-8

n = int(input())
a = list(map(int, input().split()))
subsequence = [a[0]]

for i in range(n):
  if a[i] > subsequence[-1]:
    subsequence.append(a[i])
    
print(len(subsequence))
print(*subsequence, sep = ' ')