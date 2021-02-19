# coding: utf-8

n = int(input())
duendes = list()
qtd = n // 3
times = [list() for i in range(qtd)]

for i in range(n):
  nome, idade = input().split()
  duendes.append([idade, nome])
  
for i in range (n - 1):
  for j in range (n - i - 1):
    if duendes[j][0] < duendes[j+1][0]:
      duendes[j], duendes[j+1] = duendes[j+1], duendes[j]
      
    elif duendes[j][0] == duendes[j+1][0]:
      if duendes[j][1] > duendes[j+1][1]:
        duendes[j], duendes[j+1] = duendes[j+1], duendes[j]
        
for i in range(n):
  times[i % qtd].append(duendes[i])
  
for i in range(qtd):
  print('Time', i + 1)
  
  for x in times[i]:
    print(x[1], x[0])
    
  print()