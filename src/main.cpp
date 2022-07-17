#include "AVLTree.h"

#include <iostream>

int main(int argc, char const *argv[])
{
    
    AVLTree tree;
    AVLTree::node* root = tree.insert(nullptr, 5);
    root = tree.insert(root, 4);
    root = tree.insert(root, 3);
    root = tree.insert(root,1);
   // tree.insert(root, 100);

    tree.deleteTree(root); 
    std::cout << "Hello AVLTree!" << std::endl;
    return 0;
}
