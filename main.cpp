#include <iostream>

class bst{

  class node{
    node(){}
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

// recursive insert method
void _insert(node *cn, int value){
  if (value<cn->_value){
    if(!cn->_left){
      node *nn = new node(value);
      cn->_left = nn;
      return;
    }
    _insert(cn->_left,value);
  } else {
    if(!cn->_right){
      node *nn = new node(value);
      cn->_right = nn;
      return;
    }
    _insert(cn->_right,value);
  }
}
public:
  bst(){
    _root = nullptr;
  }
  void insert(int value){
    if (nullptr == _root){
      node *nn = new node(value);
      _root = nn;
    } else {
      _insert(_root,value);
    }
    return;
    /*
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
    */
  }
  bool lookup(int value){
      node *cn = _root;
      while(cn){
        if(value<cn->_value){
          cn = cn->_left;
        } else if(value>cn->_value) {
            cn = cn->_right;
        } else if(value==cn->_value) {
          return true;
        }
      }
      return false;
  }
  bool remove(int value){
    if(!_root){
      return false;
    } 
    node *cn = _root;
    node *pn = nullptr;
    while(cn){
      if(value < cn->_value){

      } else if(value > cn->_value){

      } else if(value == cn->_value){
        // we have a match, get to work
        return true;      
      } 
    }
    return false;
  }
  void display(){
    inorder_traverse(_root);printf("\n");
    preorder_traverse(_root);printf("\n");
    postorder_traverse(_root);printf("\n");
  }
};



int main() {
  printf("Binary Search Tree unit test, and Russell I LOVE you!\n");
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
  int value = 20;
  printf("Is %d in tree? %d\n",value, tree.lookup(value));
  value = 25;
  printf("Is %d in tree? %d\n",value, tree.lookup(value));
  value = 254;
  printf("Is %d in tree? %d\n",value, tree.lookup(value));
  value = 6;
  printf("Is %d in tree? %d\n",value, tree.lookup(value));


  return 0;
}