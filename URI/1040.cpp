# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float avg, n1, n2, n3, n4, n5;

int main () {_
  cin >> n1 >> n2 >> n3 >> n4; cout << fixed << setprecision(1);
  
  avg = (2 * n1 + 3 * n2 + 4 * n3 + n4) / 10;
  
  cout << "Media: " << avg << "\n";
  
  if (avg >= 7) {
    cout << "Aluno aprovado.\n";
  }
  
  else if (5 <= avg && avg < 7) {
    cout << "Aluno em exame.\n"; 
    
    cin >> n5; avg = (avg + n5) / 2;
    
    cout << "Nota do exame: " << n5 << "\n";
    
    if (avg >= 5) {
      cout << "Aluno aprovado.\n";
    }
    
    else {
      cout << "Aluno reprovado.\n";
    }
    
    cout << "Media final: " << avg << "\n";
  }
  
  else {
    cout << "Aluno reprovado.\n";
  }
  
  return 0;
}