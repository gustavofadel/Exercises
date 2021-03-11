# coding: utf-8

while True:
  try:
    n = int(input())
    stack = list()
    queue = list()
    priorityQueue = list()
    isStack = isQueue = isPriorityQueue = True
    
    for i in range(n):
      operation, x = map(int, input().split())
      
      if operation == 1:
        stack.append(x)
        queue.append(x)
        priorityQueue.append(x)
        priorityQueue.sort(reverse = True)
        
      else:
        if len(stack) > 0 and stack[-1] == x and isStack:
          stack.pop()
          
        else:
          isStack = False
          
        if len(queue) > 0 and queue[0] == x and isQueue:
          queue.pop(0)
          
        else:
          isQueue = False
          
        if len(priorityQueue) > 0 and priorityQueue[0] == x and isPriorityQueue:
          priorityQueue.pop(0)
          
        else:
          isPriorityQueue = False
    
    if not isStack and not isQueue and not isPriorityQueue:
      print('impossible')
      
    elif isStack and not isQueue and not isPriorityQueue:
      print('stack')
      
    elif isQueue and not isStack and not isPriorityQueue:
      print('queue')
      
    elif isPriorityQueue and not isStack and not isQueue:
      print('priority queue')
      
    else:
      print('not sure')
    
  except EOFError:
    break