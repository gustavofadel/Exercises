# coding: utf-8

n = int(input())
values = list(map(lambda x: True if x == 'T' else False, input().split()))
circuit = input().split()
operationsStack = list()
valuesStack = list()
operations = {
  '*': lambda: valuesStack.pop(0) and valuesStack.pop(0),
  '+': lambda: valuesStack.pop(0) or valuesStack.pop(0),
  '-': lambda: not valuesStack.pop(0)
}

for i in range(len(circuit)):
  if circuit[i].isalpha():
    valuesStack.append(values[ord(circuit[i]) - ord('A')])
    
  else:
    operationsStack.append(circuit[i])
    
while len(operationsStack) > 0:
  valuesStack.insert(0, operations[operationsStack.pop(0)]())
  
print(str(valuesStack.pop(0))[0])