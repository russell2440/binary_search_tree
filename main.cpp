#include <iostream>

class bst{

  class node{
    int _value;
    node *_left;
    node *_right;
  public:
    node(int value){
      _left = nullptr;
      _right = nullptr;
      _value = value;
    }
  };

 node *traverse(node *n){


  }
  node *_root;
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
    }
  }
  void lookup(int value){

  }
  void display(){

  }
};



int main() {
  printf("Hallow Russ! I love you!\n");
  printf("Binary Search Tree unit test\n");
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