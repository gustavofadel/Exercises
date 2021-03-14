# coding: utf-8

def policy1 ():
  count = 0
  state = preferences[0]
  
  for i in range(1, len(preferences)):
    if state == 'D':
      count += 1
      
    elif state == 'U' and preferences[i] == 'D':
      count += 2
      
    state = 'U'
    
  return count
  
def policy2 ():
  count = 0
  state = preferences[0]
  
  for i in range(1, len(preferences)):
    if state == 'U':
      count += 1
      
    elif state == 'D' and preferences[i] == 'U':
      count += 2
      
    state = 'D'
    
  return count
  
def policy3 ():
  count = 0
  
  for i in range(1, len(preferences)):
    if preferences[i] != preferences[i - 1]:
      count += 1
      
  return count

preferences = input()

print(policy1())
print(policy2())
print(policy3())