# coding: utf-8

def mergeSort (array):
  if len(array) == 1:
    return array, 0
    
  else:
    a = array[:len(array) // 2]
    b = array[len(array) // 2:]
    
    a, ai = mergeSort(a)
    b, bi = mergeSort(b)
    
    c = list()
    i = j = 0
    inversions = ai + bi
    
    while i < len(a) and j < len(b):
      if a[i] <= b[j]:
        c.append(a[i])
        i += 1
        
      else:
        c.append(b[j])
        j += 1
        inversions += (len(a) - i)
        
    c += a[i:]
    c += b[j:]
    
    return c, inversions

n = int(input())
students = [int(input()) for i in range(n)]

print(mergeSort(students)[1])