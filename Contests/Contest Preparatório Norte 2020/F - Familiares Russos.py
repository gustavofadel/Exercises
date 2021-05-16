# coding: utf-8

familySuffixes = ['ev', 'in', 'ov', 'ina', 'eva', 'ova']
parentSuffixes = ['evich', 'ovich', 'ich', 'evna', 'ovna', 'ichna']
firstName = input().split()

for suffix in parentSuffixes:
  if firstName[1].endswith(suffix):
    firstName[1] = firstName[1][:-len(suffix)]
    break
  
for suffix in familySuffixes:
  if firstName[2].endswith(suffix):
    firstName[2] = firstName[2][:-len(suffix)]
    break

n = int(input())
sameFamily = sameParent = 0

for i in range(n):
  name = input().split()
  
  for suffix in parentSuffixes:
    if name[1].endswith(suffix):
      name[1] = name[1][:-len(suffix)]
      break
    
  for suffix in familySuffixes:
    if name[2].endswith(suffix):
      name[2] = name[2][:-len(suffix)]
      break
    
  if name[2] == firstName[2]:
    sameFamily += 1
    
    if name[1] == firstName[1]:
      sameParent += 1
    
print(sameFamily, sameParent)