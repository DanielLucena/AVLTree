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
    AVLTree::node *ptu=y->left;
    if (ptu->height=-1){
        y->left=ptu->right;
        ptu->right=y;
        y->height=0;
        y=ptu;
    }
    else{
        AVLTree::node *ptv=ptu->right;
        ptu->right=ptv->left;
        ptv->left=ptu;
        y->left=ptv->right;
        ptv->right=y;
        
        if (ptv->height=-1){

            y->height=1;
        }else{

            y->height=0;
        }

        if (ptv->height=1){

            ptu->height=-1;
        }else{
            ptu->height=0;
        }
        y=ptv; 
    }

    y->height=0;
    
    return y;
    
}

AVLTree::node* AVLTree::leftRotate(AVLTree::node* x){
    AVLTree::node *ptu=x->right;
    if (ptu->height=1){
        x->right=ptu->left;
        ptu->left=x;
        x->height=0;
        x=ptu;
    }
    else{
        AVLTree::node *ptv=ptu->left;
        ptu->left=ptv->right;
        ptv->right=ptu;
        x->right=ptv->left;
        ptv->left=x;
        
        if (ptv->height=1){

            x->height=-1;
        }else{

            x->height=0;
        }

        if (ptv->height=-1){

            ptu->height=1;
        }else{
            ptu->height=0;
        }
        x=ptv; 
    }

    x->height=0;
    
    return x;
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