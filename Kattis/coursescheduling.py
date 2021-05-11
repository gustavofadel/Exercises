# coding: utf-8

from collections import defaultdict

n = int(input())
courses = defaultdict(set)

for i in range(n):
  first, last, course = input().split()
  courses[course].add(first + ' ' + last)
  
for course, names in sorted(courses.items()):
  print(course, len(names))