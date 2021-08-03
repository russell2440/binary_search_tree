#include <iostream>

class bst{
  class node{

  };

  node *root = nullptr;

  node &traverse(node &n){

  };

public:
  bst(){

  }
  void insert(int value){

  }
  void lookup(int value){

  }
  void display(){

  }
};



int main() {
  printf("Hallow Russ! I love you!\n");
  printf("Binary Search Tree unit test\n");
  class bst tree;
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