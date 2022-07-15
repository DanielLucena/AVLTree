#ifndef AVLTree2_h
#define AVLTree2_h
#include <iostream>



class AVLTree{
    public:

        struct node
        {
        int key;
        node* left = nullptr;
        node* right = nullptr;
        int height;
        };

        struct node* root=nullptr;
        /**
         * @brief retorna o maior valor entre os dois inteiros passados
         * 
         * @param a 
         * @param b 
         * @return int do maior valor entre os dois passados
         */

 //~AVLTree() {deleteTree(root);}

void deleteTree(node* no)
{
        if(no->left!=nullptr){
            deleteTree(no->left);
        }

        if(no->right!=nullptr){
            deleteTree(no->right);
        }
            delete no;
}


int height(AVLTree::node *n){

    int r, l, h = 0;
    if(n->left != nullptr && n->right != nullptr){
        
        std::cout<<n->right->key;
        l= height(n->left) + 1;
        r = height(n->right) +1 ;
                
        if(l > r){
            return l;
        }else{
            return r;
        }
    }
    //fixme
    return h;
}

AVLTree::node* newNode(int key){
    AVLTree::node* no{new node};
    no->key = key;
    no->left = nullptr;
    no->right = nullptr;
    no->height = 1;
    return no;
}   

AVLTree::node* rightRotate(AVLTree::node* y){
    //fixme
    return nullptr;
}

AVLTree::node* leftRotate(AVLTree::node* x){
    //fixme
    return nullptr;
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

AVLTree::node* minValueNode(AVLTree::node* n){
    //fixme
    return nullptr;
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
        n->left = insert(n->left, key);
        //std::cout<<n->left->key;
    }else if(key > n->key){
        n->right = insert(n->right, key);
        //std::cout<<n->left->key;
    }

    n->height = height(n);
    std::cout<<n->height;


    if(ptr!=nullptr){
      // int bal = getBalance(n);
        
                
      /*  if(abs(bal) > 1){
           balanceTree(n);
        }*/

    }

    return n;
}

bool search(AVLTree::node* n, int key){
    //fixme
    return false;
}

AVLTree::node* deleteNode(AVLTree::node* n, int key){
    //fixme
    return nullptr;
}

void preOrder(AVLTree::node* n){
    if(n != nullptr){
       // std::cout << n->key << " ";
        preOrder(n->left);
        preOrder(n->right);
    }
}

};

#endif //AVLTree_h