#include "AVLTree.h"

#include <iostream>

//funcoes privadas
int AVLTree::max(int a, int b){
    //fixme
    return 0;
}

int AVLTree::height(AVLTree::node *n){
    //fixme
    return 0;
}

AVLTree::node* AVLTree::newNode(int key){
    node* newNode;
    newNode->key = key;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->height = 1;
    return (newNode);
}   

AVLTree::node* AVLTree::rightRotate(AVLTree::node* y){
    //fixme
    return NULL;
}

AVLTree::node* AVLTree::leftRotate(AVLTree::node* x){
    //fixme
    return NULL;
}

int AVLTree::getbalance(AVLTree::node* n){
    //fixme
    return 0;
}

AVLTree::node* AVLTree::minValueNode(AVLTree::node* n){
    //fixme
    return NULL;
}



//funcoes publicas
AVLTree::node* insert(AVLTree::node* n, int key){
    //fixme
    return NULL;
}

bool search(AVLTree::node* n, int key){
    //fixme
    return false;
}

AVLTree::node* deleteNode(AVLTree::node* n, int key){
    //fixme
    return NULL;
}

void preOrder(AVLTree::node* n){
    if(n != NULL){
        std::cout << n->key << " ";
        preOrder(n->left);
        preOrder(n->right);
    }
}