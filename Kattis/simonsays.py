# coding: utf-8

n = int(input())

for i in range(n):
  command = input()
  
  if 'Simon says' in command:
    print(command[11:])