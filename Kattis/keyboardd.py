# coding: utf-8

typed = input()
displayed = input()
sticky = set()
i = j = 0

while i < len(typed) and j < len(displayed):
  if typed[i] != displayed[j]:
    sticky.add(displayed[j])
    j += 1
    
  else:
    i += 1
    j += 1
    
while j < len(displayed):
  sticky.add(displayed[j])
  j += 1
  
print(''.join(sticky))