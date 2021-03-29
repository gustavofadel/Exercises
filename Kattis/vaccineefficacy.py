# coding: utf-8

n = int(input())
vaccinated = [0, 0, 0, 0]
control = [0, 0, 0, 0]

for i in range(n):
  participant = input()
  
  if participant[0] == 'Y':
    vaccinated[0] += 1
    vaccinated[1] += int(participant[1] == 'Y')
    vaccinated[2] += int(participant[2] == 'Y')
    vaccinated[3] += int(participant[3] == 'Y')
    
  else:
    control[0] += 1
    control[1] += int(participant[1] == 'Y')
    control[2] += int(participant[2] == 'Y')
    control[3] += int(participant[3] == 'Y')
    
for i in range(1, 4):
  infectionVaccinated = vaccinated[i] / vaccinated[0] * 100
  infectionControl = control[i] / control[0] * 100
  decrease = infectionControl - infectionVaccinated
  
  print(decrease / infectionControl * 100) if decrease > 0 else print('Not Effective')