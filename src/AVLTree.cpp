
#include <iostream>
#include <AVLTree.h>
/*
int AVLTree::max(int a, int b){
    //fixme
    return 0;
}

int height(AVLTree::node *n){

    int r, l, h = 0;
    if(n->left != nullptr && n->right != nullptr){
        
        l= height(n->left);
        r = height(n->right);
                
        if(l > r){
            h = l + 1;
        }else{
            h = r + 1;
        }
    }
    //fixme
    return h;
}

AVLTree::node* newNode(int key){
    AVLTree::node* no;
    no->key = key;
    no->left = nullptr;
    no->right = nullptr;
    no->height = 1;
    return no;
}   

AVLTree::node* AVLTree::rightRotate(AVLTree::node* y){
    //fixme
    return NULL;
}

AVLTree::node* AVLTree::leftRotate(AVLTree::node* x){
    //fixme
    return NULL;
}

int getBalance(AVLTree::node* n){
    
    int bal;
    if(n == nullptr){
        bal = 0;
    }else{
        bal = n->right - n->left;
    }
    return bal;
    //fixme

}

void balanceTree(AVLTree::node* n){

    int bal = getBalance(n);
    int l = getBalance(n->left);
    int r = getBalance(n->right);
            
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
AVLTree::node* insert(AVLTree::node* n, int key){
    AVLTree::node* ptr = nullptr;
    if(n == nullptr){
        return newNode(key);
    }

    if(n->key == key){
        return nullptr;
    }

    if(key < n->key){
        ptr = insert(n->left, key);
    }else if(key > n->key){
        ptr = insert(n->right, key);
    }

    n->height = height(n);

    if(ptr!=nullptr){
       int bal = getBalance(n);
        
                
        if(abs(bal) > 1){
           balanceTree(n);
        }

    }

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
}*/