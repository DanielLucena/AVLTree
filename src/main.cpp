#include "AVLTree2.hpp"

#include <iostream>


int main(int argc, char const *argv[])
{
    AVLTree tree;
    AVLTree::node* root = tree.insert(nullptr, 5);
    tree.insert(root, 1);
    tree.insert(root, 60);
    tree.insert(root,80);
    tree.insert(root, 100);

    tree.deleteTree(root); 
    return 0;
}
