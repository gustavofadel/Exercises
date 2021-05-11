# coding: utf-8

n, k = map(int, input().split())
commands = input().split()
i = 0
stack = list()

while i < len(commands):
  if commands[i] == 'undo':
    stack = stack[:-int(commands[i + 1])]
    i += 1
    
  else:
    stack.append(int(commands[i]))
    
  i += 1
  
print(sum(stack) % n)