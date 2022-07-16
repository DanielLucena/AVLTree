#include "AVLTree.h"

#include <iostream>

//funcoes privadas

void AVLTree::deleteTree(AVLTree::node* no)
{
        if(no->left!=nullptr){
            deleteTree(no->left);
        }

        if(no->right!=nullptr){
            deleteTree(no->right);
        }
            delete no;
}

int AVLTree::max(int a, int b){
    //fixme
    return 0;
}

int AVLTree::height(AVLTree::node *n){
    int r, l, h = 0;
    if(n != nullptr)
    {
        l= height(n->left) + 1;
        r= height(n->right) + 1;
                
        if(l > r){
           h = l;
        }else{
            h = r;
        }
    }

    return h;
}

AVLTree::node* AVLTree::newNode(int key){
    AVLTree::node* no{new node};
    no->key = key;
    no->left = nullptr;
    no->right = nullptr;
    no->height = 1;
    return (no);
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

    int hl, hr;

    if(n == nullptr) return 0;

    if(n->right == nullptr) hr = 0;
    else hr = n->right->height; 


    if(n->left == nullptr) hl = 0;
    else hl = n->left->height;
    
    return (hr - hl);
}

void AVLTree::balanceTree(AVLTree::node* n){

    int bal = getbalance(n);
    int l = getbalance(n->left);
    int r = getbalance(n->right);
            
    if(bal >= 2 && r >=0){
        //rotaciona no para a esquerda
    }
    if(bal >= 2 && r < 0){
        //rotaciona no->dir para direita
        //rotaciona no para a esquerda
    }
    if(bal <=-2 && l <=0 ){
        //rotaciona no para direita
    }
    if(bal <=-2 && l > 0 ){
        //rotaciona no->esq para esquerda
        //rotaciona no para direita
    }
}

AVLTree::node* AVLTree::minValueNode(AVLTree::node* n){
    //fixme
    return NULL;
}



//funcoes publicas
AVLTree::node* AVLTree::insert(AVLTree::node* n, int key){
    
  if(n == nullptr){
       return newNode(key);
    }

    if(n->key == key){
        return nullptr;
    }

    if(key < n->key){
        n->left = insert(n->left, key);
    }else if(key > n->key){
        n->right = insert(n->right, key);
    }

    n->height = height(n);

    int bal = getbalance(n);
    std::cout<<"no: "<< n->key << " | balanço: " << bal;
 
    //se a arvore estiver desbalanceada chama a função para balancear
    if(abs(bal)>1){ 
        std::cout<<" | balancear no "<< n->key;
        balanceTree(n);
    }

    std::cout<<"\n";

    return n;
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