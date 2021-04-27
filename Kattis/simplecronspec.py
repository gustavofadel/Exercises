# coding: utf-8

def separateList (currentList):
  currentList = currentList.split(',')
  newList = list()
  
  for value in currentList:
    if '-' in value:
      start, end = map(int, value.split('-'))
      
      for i in range(start, end + 1):
        newList.append(i)
      
    else:
      newList.append(int(value))
  
  return newList

withJob = list()

for ct in range(int(input())):
  hours, minutes, seconds = input().split()
  hours = list(range(24)) if hours == '*' else separateList(hours)
  minutes = list(range(60)) if minutes == '*' else separateList(minutes)
  seconds = list(range(60)) if seconds == '*' else separateList(seconds)
  
  for hour in hours:
    for minute in minutes:
      for second in seconds:
        withJob.append(3600 * hour + 60 * minute + second)
        
print(len(set(withJob)), len(withJob))