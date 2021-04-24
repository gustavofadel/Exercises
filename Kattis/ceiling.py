# coding: utf-8

class Node:
  def __init__ (self, value, left = None, right = None):
    self.value = value
    self.left = left
    self.right = right
    
class Tree:
  def __init__ (self):
    self.root = None
    
  def recursiveAdd (self, node, value):
    if node == None:
      return Node(value)
      
    elif value < node.value:
      node.left = self.recursiveAdd(node.left, value)
      
    elif value > node.value:
      node.right = self.recursiveAdd(node.right, value)
      
    return node
    
  def add (self, value):
    self.root = self.recursiveAdd(self.root, value)
    
  def recursiveGetShape (self, node, shape):
    if node.left:
      self.recursiveGetShape(node.left, shape + 'l')
      
    if node.right:
      self.recursiveGetShape(node.right, shape + 'r')
      
    if not node.left and not node.right:
      self.shape += shape + '-'
      
    return self.shape
    
  def getShape (self):
    self.shape = shape = ''
    self.shape += self.recursiveGetShape(self.root, '')
    
    return self.shape

n, k = map(int, input().split())
shapes = set()

for i in range(n):
  tree = Tree()
  
  for v in map(int, input().split()):
    tree.add(v)
    
  shapes.add(tree.getShape())
  
print(len(shapes))