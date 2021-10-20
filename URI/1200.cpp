# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Node {
  char value;
  Node *left, *right;
};

bool first;
char c;
Node *root = NULL;
string op;

Node *create_node (char value) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->value = value; node->left = node->right = NULL;
  return node;
}

Node *insert (Node *node, char value) {
  if (node == NULL) return create_node(value);
  if (value < node->value) node->left = insert(node->left, value);
  else node->right = insert(node->right, value);
  return node;
}

bool search (Node *node, char value) {
  if (node == NULL) return false;
  else if (value < node->value) search(node->left, value);
  else if (value == node->value) return true;
  else search(node->right, value);
}

void preorder (Node *node) {
  if (node == NULL) return;
  if (!first) cout << " "; first = false; cout << node->value;
  preorder(node->left); 
  preorder(node->right);
}

void inorder (Node *node) {
  if (node == NULL) return;
  inorder(node->left); 
  if (!first) cout << " "; first = false; cout << node->value;
  inorder(node->right);
}

void postorder (Node *node) {
  if (node == NULL) return;
  postorder(node->left); 
  postorder(node->right); 
  if (!first) cout << " "; first = false; cout << node->value;
}

int main () {_
  while (cin >> op) {
    if (op == "I") cin >> c, root = insert(root, c);
    else if (op == "P") cin >> c, cout << c << " " << (search(root, c) ? "existe" : "nao existe") << "\n";
    else if (op == "PREFIXA") first = true, preorder(root), cout << "\n";
    else if (op == "INFIXA") first = true, inorder(root), cout << "\n";
    else first = true, postorder(root), cout << "\n";
  }
  
  return 0;
}