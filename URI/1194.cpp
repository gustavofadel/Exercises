# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Node {
  char value;
  Node *left, *right;
};

int n, t;
map<char, int> pos;
string preorder, inorder;

Node *create_node (char value) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->value = value; node->left = node->right = NULL;
  return node;
}

Node *insert (Node *node, char value) {
  if (node == NULL) return create_node(value);
  if (pos[value] <= pos[node->value]) node->left = insert(node->left, value);
  else node->right = insert(node->right, value);
  return node;
}

void postorder (Node *node) {
  if (node == NULL) return;
  postorder(node->left); postorder(node->right); cout << node->value;
}

int main () {_
  cin >> t;
  
  while (t--) {
    Node *root = NULL;
    cin >> n >> preorder >> inorder;
    for (int i = 0; i < inorder.size(); i++) pos[inorder[i]] = i;
    for (char c: preorder) root = insert(root, c);
    postorder(root), cout << "\n", pos.clear();
  }
  
  return 0;
}