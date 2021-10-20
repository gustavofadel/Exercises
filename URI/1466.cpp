# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Node {
  int value;
  Node *left, *right;
};

int n, t, x;

Node *create_node (int value) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->value = value; node->left = node->right = NULL;
  return node;
}

Node *insert (Node *node, int value) {
  if (node == NULL) return create_node(value);
  if (value < node->value) node->left = insert(node->left, value);
  else node->right = insert(node->right, value);
  return node;
}

void bfs (Node *node) {
  int first = 1;
  queue<Node*> q;
  
  q.push(node);
  
  while (!q.empty()) {
    Node *current = q.front(); q.pop();
    if (current == NULL) continue;
    if (!first) cout << " ";
    first = false; cout << current->value;
    q.push(current->left); q.push(current->right);
  }
  
  cout << "\n\n";
}

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; tc++) {
    Node *root = NULL;
    
    cin >> n;
    
    while (n--) { cin >> x; root = insert(root, x); }
    
    cout << "Case " << tc << ":\n"; bfs(root);
  }
  
  return 0;
}