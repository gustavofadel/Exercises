# coding: utf-8

def merge (array, temporary, left, mid, right):
  i, j, k = left, mid + 1, left
  inversions = 0
  
  while i <= mid and j <= right:
    if array[i] <= array[j]:
      temporary[k] = array[i]
      i += 1
      k += 1
      
    else:
      temporary[k] = array[j]
      inversions += mid - i + 1
      j += 1
      k += 1
      
  while i <= mid:
    temporary[k] = array[i]
    i += 1
    k += 1
    
  while j <= right:
    temporary[k] = array[j]
    j += 1
    k += 1
  
  for i in range(left, right + 1):
    array[i] = temporary[i]
    
  return inversions

def mergeSort (array, temporary, left, right):
  inversions = 0
  
  if left < right:
    mid = (left + right) // 2
    
    inversions += mergeSort(array, temporary, left, mid)
    inversions += mergeSort(array, temporary, mid + 1, right)
    inversions += merge(array, temporary, left, mid, right)
    
  return inversions

destinations = list(map(int, list(input())))
n = len(destinations)

print(mergeSort(destinations, [0 for i in range(n)], 0, n - 1))