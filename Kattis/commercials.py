# coding: utf-8

n, p = map(int, input().split())
students = list(map(int, input().split()))
biggest = current = 0

for i in range(n):
  students[i] -= p
  current = max(current + students[i], students[i])
  biggest = max(biggest, current)
  
print(biggest)