# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Node {
  int value;
  Node *left, *right;
};

bool space;
int n;
Node *root = NULL;
string command;

Node *insert (Node *root, int value) {
  if (!root) {
    root = (Node *) malloc(sizeof(Node));
    root->value = value;
    root->left = root->right = NULL;
  }
  
  else if (root->value > value) {
    root->left = insert(root->left, value);
  }
  
  else {
    root->right = insert(root->right, value);
  }
  
  return root;
}

bool search (Node *root, int value) {
  if (!root) {
    return false;
  }
  
  if (root->value == value) {
    return true;
  }
  
  else if (root->value > value) {
    return search(root->left, value);
  }
  
  else {
    return search(root->right, value);
  }
}

Node *maxValueNode (Node *root) {
  if (!root) {
    return NULL;
  }
  
  else if (!root->right) {
    return root;
  }
  
  else {
    return maxValueNode(root->right);
  }
}

Node *remove (Node *root, int value) {
  Node *node;
  
  if (!root) {
    return NULL;
  }
  
  else if (root->value > value) {
    root->left = remove(root->left, value);
  }
  
  else if (root->value < value) {
    root->right = remove(root->right, value);
  }
  
  else if (root->left && root->right) {
    node = maxValueNode(root->left);
    root->value = node->value;
    root->left = remove(root->left, root->value);
  }
  
  else {
    node = root;
    
    if (!root->left) {
      root = root->right;
    }
    
    else if (!root->right) {
      root = root->left;
    }
    
    free(node);
  }
  
  return root;
}

void preorder (Node *root) {
  if (root) {
    if (space) {
      cout << " " << root->value;
    }
    
    else {
      cout << root->value;
      space = true;
    }
    
    preorder(root->left);
    preorder(root->right);
  }
}

void inorder (Node *root) {
  if (root) {
    inorder(root->left);
    
    if (space) {
      cout << " " << root->value;
    }
    
    else {
      cout << root->value;
      space = true;
    }
    
    inorder(root->right);
  }
}

void postorder (Node *root) {
  if (root) {
    postorder(root->left);
    postorder(root->right);
    
    if (space) {
      cout << " " << root->value;
    }
    
    else {
      cout << root->value;
      space = true;
    }
  }
}

int main () {_
  while (cin >> command) {
    if (command == "I") {
      cin >> n;
      root = insert(root, n);
    }
    
    else if (command == "P") {
      cin >> n;
      cout << n << " " << (search(root, n) ? "existe" : "nao existe") << "\n";
    }
    
    else if (command == "R") {
      cin >> n;
      root = remove(root, n);
    }
    
    else {
      space = false;
      
      if (command == "INFIXA") {
        inorder(root);
        cout << "\n";
      }
      
      else if (command == "PREFIXA") {
        preorder(root);
        cout << "\n";
      }
      
      else {
        postorder(root);
        cout << "\n";
      }
    }
  }
  
  return 0;
}