# coding: utf-8

from collections import defaultdict

n = int(input())
count = defaultdict(int)

for i in range(n):
  courses = sorted(input().split())
  count[' '.join(courses)] += 1
  
maxCount = students = 0

for courses in count:
  currentCount = count[courses]
  
  if currentCount > maxCount:
    maxCount = students = currentCount
    
  elif currentCount == maxCount:
    students += currentCount
    
print(students)