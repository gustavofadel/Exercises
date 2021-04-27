# coding: utf-8

password, message = input().split()
k = 0

for i in range(len(message)):
  if message[i] == password[k]:
    k += 1
    
    if k == len(password):
      print('PASS')
      exit()
      
  else:
    for j in range(k + 1, len(password)):
      if message[i] == password[j]:
        print('FAIL')
        exit()
        
print('FAIL')