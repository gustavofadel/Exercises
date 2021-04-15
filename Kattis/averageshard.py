# coding: utf-8

for ct in range(int(input())):
  input()
  nCs, nE = map(int, input().split())
  cs = list(map(int, input().split()))
  e = list(map(int, input().split()))
  avgCs = sum(cs) / nCs
  avsE = sum(e) / nE
  students = 0
  
  for student in cs:
    if avsE < student < avgCs:
      students += 1
      
  print(students)