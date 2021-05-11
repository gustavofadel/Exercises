# coding: utf-8

program = input()
instructions = 0

for i in range(len(program)):
  if program[i].isupper():
    instructions += (4 - (i + instructions) % 4) % 4

print(instructions)