# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, op, x;

int main () {_
  while (cin >> n) {
    bool is_priority_queue = true, is_queue = true, is_stack = true;
    priority_queue<int> pq;
    queue<int> q;
    stack<int> st;
    
    while (n--) {
      cin >> op >> x;
      
      if (op == 1) {
        pq.push(x); q.push(x); st.push(x);
      }
      
      else {
        if (!pq.empty() && pq.top() == x) {
          pq.pop();
        }
        
        else {
          is_priority_queue = false;
        }
        
        if (!q.empty() && q.front() == x) {
          q.pop();
        } 
        
        else {
          is_queue = false;
        }
        
        if (!st.empty() && st.top() == x) {
          st.pop();
        }
        
        else {
          is_stack = false;
        }
      }
    }
    
    if (is_priority_queue && !is_stack && !is_queue) {
      cout << "priority queue\n";
    }
    
    else if (is_queue && !is_priority_queue && !is_stack) {
      cout << "queue\n";
    }
    
    else if (is_stack && !is_priority_queue && !is_queue) {
      cout << "stack\n";
    }
    
    else if (!is_priority_queue && !is_queue && !is_stack) {
      cout << "impossible\n";
    }
    
    else {
      cout << "not sure\n";
    }
  }
  
  return 0;
}