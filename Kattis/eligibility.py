# coding: utf-8

for ct in range(int(input())):
  name, began, birth, courses = input().split()
  began, birth, courses = began.split('/'), birth.split('/'), int(courses)
  eligible = petition = False
  
  if int(began[0]) >= 2010:
    eligible = True
    
  elif int(birth[0]) >= 1991:
    eligible = True
    
  elif int(courses) <= 40:
    petition = True
    
  if eligible:
    print(name, 'eligible')
    
  elif petition:
    print(name, 'coach petitions')
    
  else:
    print(name, 'ineligible')