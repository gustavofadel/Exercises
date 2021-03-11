# coding: utf-8

g, s, c = map(int, input().split())
total = 3 * g + 2 * s + c

if total >= 8:
  best = 'Province or '
  
elif total >= 5:
  best = 'Duchy or '
  
elif total >= 2:
  best = 'Estate or '
  
else:
  best = ''
  
if total >= 6:
  best += 'Gold'
  
elif total >= 3:
  best += 'Silver'

else:
  best += 'Copper'
  
print(best)