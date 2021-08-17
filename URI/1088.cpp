# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int merge (int vet[], int aux[], int left, int mid, int right) {
  int cnt = 0, i = left, j = mid, k = left;
  
  while (i < mid && j <= right) {
    if (vet[i] <= vet[j]) {
      aux[k++] = vet[i++];
    }
    
    else {
      aux[k++] = vet[j++]; cnt += mid - i;
    }
  }
  
  while (i < mid) {
    aux[k++] = vet[i++];
  }
  
  while (j <= right) {
    aux[k++] = vet[j++];
  }
  
  for (i = left; i <= right; i++) {
    vet[i] = aux[i];
  }
  
  return cnt;
}

int merge_sort (int vet[], int aux[], int left, int right) {
  int cnt = 0, mid;
  
  if (left < right) {
    mid = (left + right) / 2;
    cnt += merge_sort(vet, aux, left, mid);
    cnt += merge_sort(vet, aux, mid + 1, right);
    cnt += merge(vet, aux, left, mid + 1, right);
  }
  
  return cnt;
}

int n;

int main () {_
  while (cin >> n && n) {
    int aux[n], vet[n];
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i];
    }
    
    cout << (merge_sort(vet, aux, 0, n - 1) & 1 ? "Marcelo" : "Carlos") << "\n";
  }
  
  return 0;
}