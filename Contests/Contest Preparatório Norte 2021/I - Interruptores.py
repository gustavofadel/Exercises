# coding: utf-8

def changeState (current, position, direction):
  current[position + direction] = states[current[position + direction]]
  return ''.join(current)

n = int(input())
start = ''.join([input() for i in range(n)])
end = 'A' * (n * n)
states = {
  'A': 'X',
  'X': 'M',
  'M': 'A'
}
times = {
  start: 1
}
queue = [start]

while queue:
  auxiliary = front = queue.pop(0)
  
  for i in range(len(auxiliary)):
    auxiliary = changeState(list(auxiliary), i, 0)
    
    if n == 2:
      if i != 1 and i != 3:
        auxiliary = changeState(list(auxiliary), i, 1)
        
      if i != 0 and i != 2:
        auxiliary = changeState(list(auxiliary), i, -1)
        
      if i < 2:
        auxiliary = changeState(list(auxiliary), i, 2)
        
      if i > 1:
        auxiliary = changeState(list(auxiliary), i, -2)
        
    else:
      if i != 2 and i != 5 and i != 8:
        auxiliary = changeState(list(auxiliary), i, 1)
        
      if i != 0 and i != 3 and i != 6:
        auxiliary = changeState(list(auxiliary), i, -1)
        
      if i < 6:
        auxiliary = changeState(list(auxiliary), i, 3)
        
      if i > 2:
        auxiliary = changeState(list(auxiliary), i, -3)
        
    if auxiliary not in times:
      times[auxiliary] = times[front] + 1
      queue.append(auxiliary)
      
    auxiliary = front

print(times.get(end, 0) - 1)