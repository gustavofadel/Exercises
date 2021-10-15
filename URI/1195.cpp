# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Node {
  int value;
  Node *left, *right;
};

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

void preorder (Node *node) {
  if (node == NULL) return;
  cout << " " << node->value; preorder(node->left); preorder(node->right);
}

void inorder (Node *node) {
  if (node == NULL) return;
  inorder(node->left); cout << " " << node->value; inorder(node->right);
}

void postorder (Node *node) {
  if (node == NULL) return;
  postorder(node->left); postorder(node->right); cout << " " << node->value;
}

int c, n, x;

int main () {_
  cin >> c;
  
  for (int tc = 1; tc <= c; tc++) {
    Node *root = NULL;
    
    cin >> n;
    
    while (n--) { cin >> x; root = insert(root, x); }
    
    cout << "Case " << tc << ":\n";
    cout << "Pre.:"; preorder(root); cout << "\n";
    cout << "In..:"; inorder(root); cout << "\n";
    cout << "Post:"; postorder(root); cout << "\n\n";
  }
  
  return 0;
}