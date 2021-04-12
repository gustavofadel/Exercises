# coding: utf-8

from heapq import heappush, heappop
from itertools import permutations

days = {1: 31, 3: 31, 4: 30, 5: 31, 6: 30, 7: 31, 8: 31, 9: 30, 10: 31, 11: 30, 12: 31}

def isLeap (year):
  return (year % 4 == 0 and year % 100 != 0) or year % 400 == 0
  
def monthDays (month, year):
  if month == 2:
    return 29 if isLeap(year) else 28
    
  else:
    return days[month]
    
def isValid (day, month, year):
  return year >= 2000 and 1 <= month <= 12 and 1 <= day <= monthDays(month, year)
  
for ct in range(int(input())):
  possibleDates = list()
  visited = set()
  
  for permutation in permutations(input().replace(' ', '')):
    permutation = ''.join(permutation)
    day, month, year = int(permutation[:2]), int(permutation[2:4]), int(permutation[4:])
    
    if isValid(day, month, year) and (day, month, year) not in visited:
      heappush(possibleDates, (year, month, day))
      visited.add((day, month, year))
      
  if len(possibleDates) == 0:
    print(0)
    
  else:
    year, month, day = heappop(possibleDates)
    print('%d %02d %02d %d' % (len(possibleDates) + 1, day, month, year))