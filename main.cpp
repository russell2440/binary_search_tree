#include <iostream>

class bst{

  class node{
  public:
    int _value;
    node *_left;
    node *_right;
    node(int value){
      _left = nullptr;
      _right = nullptr;
      _value = value;
    }
  };

  node *_root;


  /* inorder_traverse
  Until all nodes are traversed −
  Step 1 − Recursively traverse left subtree.
  Step 2 − Visit root node.
  Step 3 − Recursively traverse right subtree.
  */
  void inorder_traverse(node *n){
    if (nullptr != n->_left){
      inorder_traverse(n->_left);
    }
    printf("%d,",n->_value);
    if (nullptr != n->_right){
      inorder_traverse(n->_right);
    }
  }
  
  /* preorder_traverse
  Until all nodes are traversed −
  Step 1 − Visit root node.
  Step 2 − Recursively traverse left subtree.
  Step 3 − Recursively traverse right subtree.
  */
  void preorder_traverse(node *n){
    printf("%d,",n->_value);
    if (nullptr != n->_left){
      preorder_traverse(n->_left);
    }
    if (nullptr != n->_right){
      preorder_traverse(n->_right);
    }
  }

  /* postorder_traverse
  Until all nodes are traversed −
  Step 1 − Recursively traverse left subtree.
  Step 2 − Recursively traverse right subtree.
  Step 3 − Visit root node.
  */
  void postorder_traverse(node *n){
    if (nullptr != n->_left){
      postorder_traverse(n->_left);
    }
    if (nullptr != n->_right){
      postorder_traverse(n->_right);
    }
    printf("%d,",n->_value);
  }

public:
  bst(){
    _root = nullptr;
  }
  
  void insert(int value){
    // create the node to be inserted
    // then find where to insert it
    node *nn = new node(value);
    if (nullptr == _root){
      _root = nn;
    } else {
      node *cn = _root;
      while(true){
        if (value < cn->_value){ //right
          if(nullptr == cn->_left){
            cn->_left = nn;
            break;
          }
          cn = cn->_left;
        } else { // right
          {
            if(nullptr == cn->_right){
              cn->_right = nn;
              break;
            }
            cn = cn->_right;
          }
        }
      }
    }
  }
  void lookup(int value){

  }
  void display(){
    inorder_traverse(_root);printf("\n");
    preorder_traverse(_root);printf("\n");
    postorder_traverse(_root);printf("\n");
  }
};



int main() {
  printf("Binary Search Tree unit test, and I LOVE you!\n");
  bst tree;
//                  9
//          4               20
//      1       6     15          170
//
  tree.insert(9);
  tree.insert(4);
  tree.insert(6);
  tree.insert(20);
  tree.insert(170);
  tree.insert(15);
  tree.insert(1);

  tree.display();

  return 0;
}